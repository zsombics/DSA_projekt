//
// Created by zsomb on 5/11/2022.
//

#include <stdbool.h>
#include "../Headers/gyogyszerQueue.h"
#include "../Shared/Header/errors.h"


void createMedQueue(MedQueue **medQueue, unsigned int maxSize){
    (*medQueue) = malloc(sizeof(MedQueue));
    (*medQueue)->Medicines = (malloc(maxSize * sizeof(Medicine *)));
    (*medQueue)->size=maxSize;
    for(int i=0;i<maxSize;i++)
    {
        (*medQueue)->Medicines[i]=malloc(sizeof (Medicine));
    }
    (*medQueue)->front = -1;
    (*medQueue)->rear = -1;
}
bool queueIsEmpty(MedQueue *medQueue){
    if(medQueue->rear==-1) return true;
    else return false;
}
bool queueIsFull(MedQueue *medQueue){
    if(medQueue->rear==medQueue->size-1) return true;
    else return false;
}
void enqueue(MedQueue *medQueue,Medicine *medicine){
    if(!queueIsFull(medQueue)){
        if(queueIsEmpty(medQueue)) medQueue->front++;
      //  SetMedicinData(medQueue->Medicines[medQueue->rear],medicine->type,medicine->medicinetype);
//        printf("ok2");
       medQueue->rear++;
        medQueue->Medicines[medQueue->rear] = medicine;
    }
    else printErrorMessages(QUEUE_IS_FULL);
}
void dequeue(MedQueue *medQueue){
    if(!queueIsEmpty(medQueue)){
        medQueue->Medicines[medQueue->front]=NULL;
        medQueue->front++;
    }
   else printErrorMessages(QUEUE_IS_EMPTY);
}
void enqueuefull(MedQueue *medQueue,enum TypeOfIllness illness ){
    for (int i = 0; i < 7; ++i) {
        enqueue(medQueue, illnestomedicine(illness));
    }
}
void deleteQueue(MedQueue **medQueue){

    free((*medQueue)->Medicines);

}