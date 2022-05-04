//
// Created by zsomb on 4/20/2022.
//

#ifndef HOSPITAL_PROJECT_BETEG_H
#define HOSPITAL_PROJECT_BETEG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "orvos.h"

enum PatientType {
    FELNOTT,
    GYEREK,
    IDOS
};

enum GenderTypePatient {
    FEMALE_, MALE_
};

enum IllnesSeriousness {
    SULYOS,
    INTENZIV,
    ENYHE
};


typedef struct {
    unsigned int id;
    char name[30];
    enum PatientType type;
    enum GenderTypePatient gender;
    enum TypeOfIllness illness;
    enum IllnesSeriousness illnesSeriousness;
    Staff orvos;
} Patient;

char *getPatient(enum PatientType type);

char *getGenderTypePatient(enum GenderTypePatient gender);

char *getTypeOfIllness(enum TypeOfIllness illness);

char *getIllnesSeriousness(enum IllnesSeriousness illnesSeriousness);

void createPatient(Patient **patient);

void SetPatientData(Patient *patient,
                    char *name,
                    enum PatientType type,
                    enum GenderTypePatient gender,
                    enum TypeOfIllness illness,
                    enum IllnesSeriousness illnesSeriousness,
                            Staff orvos
);

void printPatient(Patient *patient, char *destination);

void deletePatient(Patient **patient);

#endif //HOSPITAL_PROJECT_BETEG_H
