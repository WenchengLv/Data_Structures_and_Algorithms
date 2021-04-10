//
// Created by lv on 2021/4/4.
//

#ifndef STACK_AND_QUEUE_SQSTACK_H
#define STACK_AND_QUEUE_SQSTACK_H

#define MAX_SIZE 100

struct SqStack{
    double data[MAX_SIZE];
    int top;
};

bool InitStack(SqStack & Stack);
bool StackEmpty(SqStack & Stack);
bool Push(SqStack & Stack,double & a);
double Pop(SqStack & Stack);
double GetTop(SqStack & Stack);

#endif //STACK_AND_QUEUE_SQSTACK_H
