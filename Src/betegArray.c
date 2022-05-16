//
// Created by zsomb on 4/20/2022.
//

#include "../Headers/betegArray.h"
#include "../Shared/Header/constans.h"
#include "../Shared/Header/errors.h"
#include <stdlib.h>

void createPatientArray(PatientArray **patientArray, unsigned int maxPatient) {
    *patientArray = (PatientArray *) malloc(sizeof(PatientArray));
    if (!(*patientArray)->patients) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
    (*patientArray)->patients = (Patient **) malloc(maxPatient * sizeof(Patient *));
    if (!(*patientArray)->patients) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
    (*patientArray)->maxPatient = maxPatient;
    for (int i = 0; i < (*patientArray)->maxPatient; ++i) {
        (*patientArray)->patients[i] = NULL;
    }
}

void deletePatientArray(PatientArray **patientArray) {
    if (*patientArray != NULL) {
        for (int i = 0; i < (*patientArray)->maxPatient; ++i) {
            deletePatient(&(*patientArray)->patients[i]);
        }
        (*patientArray)->maxPatient = 0;
        free((*patientArray)->patients);
        free((*patientArray));
        *patientArray = NULL;
        printDeleteMessage(SUCCESSFUL_DELETION);
    }
}

bool addNewPatient(PatientArray *patientArray, Patient *newPatient) {
    if (patientArray != NULL && patientArray->maxPatient >numberOfPatient && numberOfPatient >= 0 && newPatient != NULL) {
        patientArray->patients[numberOfPatient] = newPatient;
        numberOfPatient++;
        return true;
    }
    return false;
}

Patient *getPatientAtPosition(PatientArray *patientArray, int position) {
    if (position < 0 || position >= patientArray->maxPatient) {
        printf("Incorrecct position");
        return NULL;
    }
    return patientArray->patients[position];
}

void readPatient(PatientArray *patientArray, char *from) {
    if (freopen(from, "r", stdin) == NULL) { printErrorMessages(FILE_NOT_FOUND); }
    else {
        scanf("%i\n", &numberOfPatient);
    }
    for (int i = 0; i < numberOfPatient; ++i) {
        Patient *newPatient;
        createPatient(&newPatient);
        scanf("%[^\n]", newPatient->name);
        scanf("%i", &newPatient->type);
        scanf("%i", &newPatient->gender);
        scanf("%i", &newPatient->illness);
        scanf("%i", &newPatient->illnesSeriousness);
        addNewPatient(patientArray, newPatient);
    }
    freopen(CON, "r", stdin);
}

void printPatientArray(PatientArray *patientArray, char *destination) {
    freopen(destination, "w", stdin);
    printf("ALL patients:\n");
    for (int i = 0; i < patientArray->maxPatient; ++i) {
        if (patientArray->patients[i] != NULL) {
            printPatient(patientArray->patients[i], destination);
        }
    }
    freopen(CON, "w", stdin);
}