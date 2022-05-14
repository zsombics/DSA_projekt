//
// Created by zsomb on 4/20/2022.
//

#ifndef HOSPITAL_PROJECT_BETEGARRAY_H
#define HOSPITAL_PROJECT_BETEGARRAY_H

#include <stdbool.h>
#include "beteg.h"

typedef struct {
    Patient **patients;
    unsigned int maxPatient;
} PatientArray;

void createPatientArray(PatientArray **patientArray, unsigned int maxPatient);

void deletePatientArray(PatientArray **patientArray);

bool addNewPatient(PatientArray *patientArray, Patient *newPatient, int position);

Patient *getPatientAtPosition(PatientArray *patientArray, int position);

void readPatient(PatientArray *patientArray, char *from);

void printPatientArray(PatientArray *patientArray, char *destination);
#endif //HOSPITAL_PROJECT_BETEGARRAY_H
