//
// Created by zsomb on 5/19/2022.
//

#include "../Header/menu1.h"

void menu1(StaffArray *staffArray){
    printStaffArray(staffArray, CON);
    freopen(CON, "r", stdin);
    printf("Szeretnel uj muveletet vegezni? Ha igen akkor nyomd meg az '1'-est, ha nem akkor '0'-t:");
}