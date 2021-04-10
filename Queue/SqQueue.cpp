//
// Created by lv on 2021/4/4.
//

#include "SqQueue.h"

bool initQueue(SqQueue & queue){
    queue.rear = -1;
    queue.front = -1;
}
bool enQueue(SqQueue & queue,double a){
    if (queue.rear == MAX_SIZE-1)
        return false;
    queue.rear++;
    queue.data[queue.rear] = a;

    return true;
}

double deQueue(SqQueue & queue){
    if(queue.front == queue.rear)
        return false;
    queue.front++;
    return queue.data[queue.front];
}