//
// Created by zsomb on 4/20/2022.
//

#ifndef HOSPITAL_PROJECT_GYOGYSZER_H
#define HOSPITAL_PROJECT_GYOGYSZER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum MedicineType {
    INJEKCIO,
    KAPSZULA
};
enum TypeOfMedicine {
    FAJDALOMCSILLAPITO,
    NYUGTATO,
    ALTATO,
    ANTIBIOTIKUM,
    VERHIGITO,

};

typedef struct {
    enum MedicineType type;
    enum TypeOfMedicine medicinetype;
} Medicine;

char *getMedicinetype(enum MedicineType type);

char *getTypeOfMedicin(enum TypeOfMedicine medicinetype);

void createMedicin(Medicine **medicine);

void SetMedicinData(Medicine *medicine,
                    char *name,
                    enum MedicineType type,
                    enum TypeOfMedicine medicinetype
);

void printMedicin(Medicine *medicine, char *destination);

void deleteMedicin(Medicine **medicine);
#endif //HOSPITAL_PROJECT_GYOGYSZER_H
