//
// Created by lv on 2021/4/4.
//
#include "CircularQueue.h"

bool initQueue(CirQueue & queue){
    queue.front = 0;
    queue.rear =0;
    return true;
}
bool enQueue(CirQueue & queue,double a){
    if (queue.front+1)
    queue.rear++;
    queue.data[queue.rear] = a;
    return true;
}
double deQueue(CirQueue & queue){

}

