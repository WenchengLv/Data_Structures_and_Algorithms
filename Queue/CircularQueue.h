//
// Created by lv on 2021/4/4.
//

#ifndef QUEUE_CIRCULARQUEUE_H
#define QUEUE_CIRCULARQUEUE_H

#define MAX  100

struct CirQueue{
    double data[MAX];
    int front,rear;
};

bool initQueue(CirQueue & queue);
bool enQueue(CirQueue & queue,double a);
double deQueue(CirQueue & queue);

#endif //QUEUE_CIRCULARQUEUE_H
