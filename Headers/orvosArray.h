//
// Created by zsomb on 4/20/2022.
//

#ifndef HOSPITAL_PROJECT_ORVOSARRAY_H
#define HOSPITAL_PROJECT_ORVOSARRAY_H
#include "orvos.h"
#include <stdbool.h>

typedef struct {
    Staff **staffs;
    unsigned int maxDoctor;
} StaffArray;

void createStaffArray(StaffArray **staffArray, unsigned int maxDoctor);

void deleteStaffArray(StaffArray **staffArray);

bool addNewStaff(StaffArray *staffArray, Staff *newStaff);

Staff *getStaffAtPosition(StaffArray *staffArray, int position);

void readStaff(StaffArray *staffArray, char *from);

void printStaffArray(StaffArray *staffArray, char *destination);
#endif //HOSPITAL_PROJECT_ORVOSARRAY_H
