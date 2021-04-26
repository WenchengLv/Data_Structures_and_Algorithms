//
// Created by lv on 2021/4/4.
//

#include "SqStack.h"

bool InitStack(SqStack & Stack){
    Stack.top=-1;
    return true;
}

bool StackEmpty(SqStack & Stack){
    if(Stack.top=-1)
        return true;
    return false;
}

bool Push(SqStack & Stack,double & a){
    if (Stack.top == MAX_SIZE-1)
        return false;
    Stack.top++;
    Stack.data[Stack.top]=a;
    return true;
}

double Pop(SqStack & Stack){
    if (Stack.top == -1)
        return false;
    double a = Stack.data[Stack.top];
    Stack.top--;
    return a;
}

double GetTop(SqStack & Stack){
    double a;
    a = Stack.data[Stack.top];
    return a;
}
