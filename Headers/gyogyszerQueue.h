//
// Created by zsomb on 5/11/2022.
//

#ifndef HOSPITAL_PROJECT_GYOGYSZERQUEUE_H
#define HOSPITAL_PROJECT_GYOGYSZERQUEUE_H
#include "gyogyszer.h"
#include <stdbool.h>
typedef struct {
    Medicine **Medicines;
    int front;
    int rear;
    unsigned int size;
} MedQueue;
void createMedQueue(MedQueue **patientArray, unsigned int maxSize);
bool queueIsEmpty(MedQueue *medQueue);
bool queueIsFull(MedQueue *medQueue);
void enqueue(MedQueue *medQueue,Medicine *medicine);
void dequeue(MedQueue *medQueue);
void enqueuefull(MedQueue *medQueue,enum TypeOfIllness illness);
void deleteQueue(MedQueue **medQueue);
void printqueue(MedQueue *medQueue);
#endif //HOSPITAL_PROJECT_GYOGYSZERQUEUE_H
