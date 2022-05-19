//
// Created by zsomb on 5/19/2022.
//

#include "../Header/menu1.h"

void menu1(StaffArray *staffArray, int *ok){
    printStaffArray(staffArray, CON);
    printf("Szeretnel uj muveletet vegezni? Ha igen akkor nyomd meg az '1'-est, ha nem akkor '0'-t:");
    scanf("%i",&ok);
    scanf("%i",&ok);
    printf("%i",ok);
}