//
// Created by zsomb on 4/20/2022.
//

#include "../Headers/orvosArray.h"
#include "../Shared/Header/errors.h"
//#include "../Shared/Header/constans.h"
#include <stdlib.h>
#include <stdbool.h>

void createStaffArray(StaffArray **staffArray, unsigned int maxDoctor) {
    *staffArray = (StaffArray *) malloc(sizeof(StaffArray));
    if (!(*staffArray)->staffs) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
    (*staffArray)->staffs = (Staff **) malloc(maxDoctor * sizeof(Staff *));
    if (!(*staffArray)->staffs) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
    (*staffArray)->maxDoctor = maxDoctor;
    for (int i = 0; i < (*staffArray)->maxDoctor; ++i) {
        (*staffArray)->staffs[i] = NULL;
    }
}

void deleteStaffArray(StaffArray **staffArray) {
    if (*staffArray != NULL) {
        for (int i = 0; i < (*staffArray)->maxDoctor; ++i) {
            deleteStaff(&(*staffArray)->staffs[i]);
        }
        (*staffArray)->maxDoctor = 0;
        free((*staffArray)->staffs);
        free((*staffArray));
        *staffArray = NULL;
        printDeleteMessage(SUCCESSFUL_DELETION);
    }
}

bool addNewStaff(StaffArray *staffArray, Staff *newStaff) {
    if (staffArray != NULL && staffArray->maxDoctor > staffposition && staffposition >= 0 && newStaff != NULL) {
        staffArray->staffs[staffposition] = newStaff;
        staffposition++;
        return true;
    }
    return false;
}

Staff *getStaffAtPosition(StaffArray *staffArray, int position) {
    if (position < 0 || position >= staffArray->maxDoctor) {
        printf("Incorrecct position");
        return NULL;
    }
    return staffArray->staffs[position];
}

void readStaff(StaffArray *staffArray, char *from) {
    if (freopen(from, "r", stdin) == NULL) { printErrorMessages(FILE_NOT_FOUND); }
    else {
        scanf("%i\n", &numberOfStaff);
    }
    for (int i = 0; i < numberOfStaff; ++i) {
        Staff *newStaff;
        createStaff(&newStaff);
        scanf("%[^\n]", newStaff->name);
        scanf("%i", &newStaff->specialization);
        scanf("%i", &newStaff->illness);
        scanf("%i%i%i\n", &newStaff->birthDate.year, &newStaff->birthDate.month, &newStaff->birthDate.day);
        addNewStaff(staffArray, newStaff);
    }
    freopen(CON, "r", stdin);
}

void printStaffArray(StaffArray *staffArray, char *destination) {
    freopen(destination, "w", stdin);
    printf("Korhazi alkalmazottak listaja:\n");
    for (int i = 0; i < staffposition; ++i) {
        if (staffArray->staffs[i] != NULL) {
            printStaff(staffArray->staffs[i], destination);
        }
    }
    freopen(CON, "w", stdin);
}