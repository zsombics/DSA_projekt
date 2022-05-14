//
// Created by zsomb on 4/20/2022.
//
#include <stdio.h>
#include "../Header/errors.h"
void printErrorMessages(enum Errors error) {
    switch (error) {
        case MEMORY_ALLOCATION:
            printf("\nMEMORY_ALLOCATION");
        case FILE_NOT_FOUND:
            printf(" \nFILE_NOT_FOUND");
        case NULL_POINTER_EXCEPTION:
            printf(" \nNULL_POINTER_EXCEPTION");
        case STACK_IS_FULL:
            printf(" \nSTACK_IS_FULL");
        case STACK_IS_EMPTY:
            printf(" \nSTACK_IS_EMPTY");
        case QUEUE_IS_FULL:
            printf(" \nQUEUE_IS_FULL");
        case QUEUE_IS_EMPTY:
            printf(" \nQUEUE_IS_EMPTY");
        default:
            printf("UNDEFINED");
    }
}

void printDeleteMessage(enum DeleteType delete) {
    switch (delete) {
        case SUCCESSFUL_DELETION:
            printf(" \nSUCCESSFUL_DELETION ");
            break;
        case UNSUCCESFUL_DELETION:
            printf(" \nUNSUCCESFUL_DELETION ");
            break;
        default:
            printf(" \nUnderfined ");
            break;
    }
}