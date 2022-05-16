//
// Created by zsomb on 4/20/2022.
//

#include "../Header/lab1.h"


void SetUpStaffData() {
    StaffArray *staffArray;
    createStaffArray(&staffArray, 30);
    Staff *staff1;
    BirthDate birthDate1 = {1977, 8, 3};
    createStaff(&staff1);
    SetStaffData(staff1, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate1);
    printStaff(staff1, CON);
    addNewStaff(staffArray, staff1);
    Staff *staff2;
    BirthDate birthDate2 = {1977, 8, 3};
    createStaff(&staff2);
    SetStaffData(staff2, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate2);
    addNewStaff(staffArray, staff2);
    Staff *staff3;
    BirthDate birthDate3 = {1977, 8, 3};
    createStaff(&staff3);
    SetStaffData(staff3, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate3);
    addNewStaff(staffArray, staff3);
    Staff *staff4;
    BirthDate birthDate4 = {1977, 8, 3};
    createStaff(&staff4);
    SetStaffData(staff4, " Dr. Czink Elek ", RADIOLOGUS, BALESET, birthDate4);
    addNewStaff(staffArray, staff4);
    Staff *staff5;
    BirthDate birthDate5 = {1977, 8, 3};
    createStaff(&staff5);
    SetStaffData(staff5, " Dr. Czink Elek ", RADIOLOGUS, TUDO_PROBLEMA, birthDate5);
    addNewStaff(staffArray, staff5);
    printf("%i",staffposition);
    printStaffArray(staffArray, CON);
    printf("%i",staffposition);
    PatientArray *patientArray;
    createPatientArray(&patientArray, 25);
    Patient *patient1;
    createPatient(&patient1);
    SetPatientData(patient1, "Kantor Anna", GYEREK, FEMALE_, BALESET, INTENZIV, staffArray);
    addNewPatient(patientArray, patient1);
    printPatientArray(patientArray, CON);
}