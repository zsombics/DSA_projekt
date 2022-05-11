//
// Created by zsomb on 4/20/2022.
//
#include <stdio.h>
#ifndef HOSPITAL_PROJECT_ERRORS_H
#define HOSPITAL_PROJECT_ERRORS_H

enum Errors{
    MEMORY_ALLOCATION, FILE_NOT_FOUND, NULL_POINTER_EXCEPTION, STACK_IS_FULL,
    STACK_IS_EMPTY,QUEUE_IS_FULL, QUEUE_IS_EMPTY
};
enum DeleteType{
    SUCCESSFUL_DELETION,
    UNSUCCESFUL_DELETION
};
void printErrorMessages(enum Errors error);
void printDeleteMessage(enum DeleteType delete);
#endif //HOSPITAL_PROJECT_ERRORS_H
