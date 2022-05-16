//
// Created by zsomb on 4/20/2022.
//

#include "../Headers/gyogyszer.h"
#include "../Shared/Header/errors.h"
#include "../Shared/Header/constans.h"

char *getMedicinetype(enum MedicineType type) {
    switch (type) {
        case INJEKCIO:
            return " INJEKCIO ";
        case KAPSZULA:
            return " KAPSZULA ";
        default:
            return " UNDEFINED ";
    }
}

char *getTypeOfMedicin(enum TypeOfMedicine medicinetype) {
    switch (medicinetype) {
        case FAJDALOMCSILLAPITO:
            return " FAJDALOMCSILLAPITO ";
        case NYUGTATO:
            return " NYUGTATO ";
        case ALTATO:
            return " ALTATO ";
        case ANTIBIOTIKUM:
            return " ANTIBIOTIKUM ";
        default:
            return " UNDEFINED ";
    }
}

void createMedicin(Medicine **medicine) {
    (*medicine) = malloc(sizeof(Medicine));
    if (!(*medicine)) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
}


void SetMedicinData(Medicine *medicine, enum MedicineType type, enum TypeOfMedicine medicinetype) {
    medicine->type = type;
    medicine->medicinetype = medicinetype;
}

void printMedicin(Medicine *medicine, char *destination) {
    printf("%s", getMedicinetype(medicine->type));
    printf("%s", getTypeOfMedicin(medicine->medicinetype));
}

void deleteMedicin(Medicine **medicine) {
    free(*medicine);
    (*medicine) = NULL;
}
Medicine *illnestomedicine(enum TypeOfIllness illness){
    switch (illness) {
       case BALESET:
           {   Medicine *baleset;
               createMedicin(&baleset);
               SetMedicinData(baleset,INJEKCIO,ALTATO);
               return baleset;
            }
        case TUDO_PROBLEMA:
        {   Medicine *tudo;
            createMedicin(&tudo);
            SetMedicinData(tudo,INJEKCIO,ALTATO);
            return tudo;
        }
       default:
           return  0;

   }

}