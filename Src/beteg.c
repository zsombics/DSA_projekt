//
// Created by zsomb on 4/20/2022.
//

#include "../Headers/beteg.h"
#include "../Shared/Header/errors.h"
#include "../Shared/Header/constans.h"
#include "../Headers/orvosArray.h"

char *getPatient(enum PatientType type) {
    switch (type) {
        case FELNOTT:
            return " FELNOTT ";
        case GYEREK:
            return " GYEREK ";
        case IDOS:
            return " IDOS ";
        default:
            return " UNDEFINED ";
    }
}

char *getGenderTypePatient(enum GenderTypePatient gender) {
    switch (gender) {
        case FEMALE_:
            return " FEMALE ";
        case MALE_:
            return " MALE ";
        default:
            return " UNDEFINED ";
    }
}

char *getTypeOfIllness(enum TypeOfIllness illness) {
    switch (illness) {
        case BALESET:
            return " BALESET ";
        case TUDO_PROBLEMA:
            return " TUDO_PROBLEMA ";
        case MENTALIS_PROBLEMA:
            return " MENTALIS_PROBLEMA ";
        case SZIV_PROBLEMA:
            return " SZIV_PROBLEMA ";
        case ALLERGIA:
            return " ALLERGIA ";
        default:
            return " UNDEFINED ";
    }
}

char *getIllnesSeriousness(enum IllnesSeriousness illnesSeriousness) {
    switch (illnesSeriousness) {
        case INTENZIV:
            return "INTENZIV";
        case SULYOS:
            return " SULYOS ";
        case ENYHE:
            return " ENYHE ";
        default:
            return " UNDEFINED ";
    }
}

void createPatient(Patient **patient) {
    (*patient) = malloc(sizeof(Patient));
    if (!(*patient)) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
    (*patient)->orvos = malloc(sizeof(Staff));
    //(*patient)->medQueue = malloc(sizeof(MedQueue));
    createMedQueue(&(*patient)->medQueue, 20);
    (*patient)->id = ++numberOfPatient;
}

void SetPatientData(Patient *patient, char *name, enum PatientType type,
               enum GenderTypePatient gender,
               enum TypeOfIllness illness,enum IllnesSeriousness illnesSeriousness, StaffArray *Saff) {
    strcpy(patient->name, name);
    patient->type = type;
    patient->gender = gender;
    patient->illness = illness;
    patient->illnesSeriousness = illnesSeriousness;
    // Staff orvos
    for (int i = 0; i <staffposition; ++i) {
        if ((Saff->staffs[i])->illness == patient->illness) {
            patient->orvos=Saff->staffs[i];
        }
    }

    for (int i = 0; i < 8; ++i) {
        enqueue(patient->medQueue, illnestomedicine(illness));
    }
    numberOfPatient++;
}

void printPatient(Patient *patient, char *destination) {

    printf("%s\n", patient->name);
    printf("%s", getPatient(patient->type));
    printf("%s", getGenderTypePatient(patient->gender));
    printf("%s", getTypeOfIllness(patient->illness));
    printf("%s\n", getIllnesSeriousness(patient->illnesSeriousness));
}

void deletePatient(Patient **patient) {
    free(*patient);
    (*patient) = NULL;
}