//
// Created by lv on 2021/4/4.
//

#ifndef QUEUE_SQQUEUE_H
#define QUEUE_SQQUEUE_H

#define MAX_SIZE 100

struct SqQueue{
    double data[MAX_SIZE];
    int front,rear;
};

bool initQueue(SqQueue & queue);
bool enQueue(SqQueue & queue,double a);
double deQueue(SqQueue & queue);

#endif //QUEUE_SQQUEUE_H