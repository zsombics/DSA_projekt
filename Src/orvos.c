//
// Created by zsomb on 4/20/2022.
//

#include "../Headers/orvos.h"
#include "../Shared/Header/errors.h"


char *getSpecializationType(enum SpecializationType specialization) {
    switch (specialization) {
        case REUMATOLOGUS:
            return " REUMATOLOGUS  ";
        case RADIOLOGUS:
            return " RADIOLOGUS ";
        case PSZICHIATER:
            return " PSZICHIATER ";
        case PLASZTIKAI_SEBESZ:
            return " PLASZTIKAI_SEBESZ ";
        case GYEREKGYOGYASZ:
            return " GYEREKGYOGYASZ ";
        case PATOLOGUS:
            return " PATOLOGUS ";
        case SZEMESZ:
            return " SZEMESZ ";
        case ONKOLOGUS:
            return " ONKOLOGUS ";
        case NOGYOGYASZ:
            return " NOGYOGYASZ ";
        case HAZIORVOS:
            return " HAZIORVOS ";
        case FUL_ORR_GEGESZ:
            return " FUL_ORR_GEGESZ ";
        case BORGYOGYASZ:
            return " BORGYOGYASZ ";
        case ALLERGOLOGUS:
            return " ALLERGOLOGUS ";
        case SZIVORVOS:
            return " SZIVORVOS ";
        case SEBESZ:
            return " SEBESZ ";
        case SEBESZ_ASZISZTENS:
            return " SEBESZ_ASZISZTENS ";
        case HAZIORVOS_ASZISZTENS:
            return " HAZIORVOS_ASZISZTENS ";
        default:
            return " UNDEFINED ";
    }
}

void createStaff(Staff **staff) {
    (*staff) = malloc(sizeof(Staff));
    if (!(*staff)) {
        printErrorMessages(MEMORY_ALLOCATION);
    }
}

void SetStaffData(Staff *staff, char *name,
                  enum SpecializationType specialization,enum TypeOfIllness illness, BirthDate birthDate) {
    strcpy(staff->name, name);
    staff->specialization = specialization;
    staff->illness=illness;
    staff->birthDate = birthDate;
}

void printStaff(Staff *staff, char *destination) {
    printf("Nev:%s \n", staff->name);
    printf("Szakma es betegseg, amit gyogyit:%s->%s\n", getSpecializationType(staff->specialization), getTypeOfIllnes(staff->illness));
    printf("Szuletesi datum: %i.%i.%i\n\n", staff->birthDate.year, staff->birthDate.month, staff->birthDate.day);
}

void deleteStaff(Staff **staff) {
    free(*staff);
    (*staff) = NULL;
}
char *getTypeOfIllnes(enum TypeOfIllness illness) {
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