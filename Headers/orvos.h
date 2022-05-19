//
// Created by zsomb on 4/20/2022.
//

#ifndef HOSPITAL_PROJECT_ORVOS_H
#define HOSPITAL_PROJECT_ORVOS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Shared/Header/constans.h"

enum SpecializationType {
    REUMATOLOGUS,
    RADIOLOGUS,
    PSZICHIATER,
    PLASZTIKAI_SEBESZ,
    GYEREKGYOGYASZ,
    PATOLOGUS,
    SZEMESZ,
    ONKOLOGUS,
    NOGYOGYASZ,
    HAZIORVOS,
    FUL_ORR_GEGESZ,
    BORGYOGYASZ,
    ALLERGOLOGUS,
    SZIVORVOS,
    SEBESZ,
    SEBESZ_ASZISZTENS,
    HAZIORVOS_ASZISZTENS

};
typedef struct {
    unsigned int year;
    unsigned int month;
    unsigned int day;
} BirthDate;
typedef struct {
    char name[30];
    enum SpecializationType specialization;
    enum TypeOfIllness illness;
    BirthDate birthDate;
} Staff;


char *getSpecializationType(enum SpecializationType specialization);

void createStaff(Staff **staff);

void SetStaffData(Staff *staff,
                  char *name,
                  enum SpecializationType specialization,
                  enum TypeOfIllness illness,
                  BirthDate birthDate
);

void printStaff(Staff *staff, char *destination);

void deleteStaff(Staff **staff);
char *getTypeOfIllnes(enum TypeOfIllness illness);
#endif //HOSPITAL_PROJECT_ORVOS_H
