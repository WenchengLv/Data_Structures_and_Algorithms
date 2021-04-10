//
// Created by lv on 2021/4/4.
//
#include "LiStack.h"
#include <iostream>

bool Li_InitStack(LiStack_ptr & Stack){
    Stack->next = NULL;
    return true;
}

bool Li_StackEmpty(LiStack_ptr & Stack){
    if (Stack->next == NULL)
        return true;
    return false;
}

bool Li_Push(LiStack_ptr & Stack,double  a){
    LiStack_ptr Li = new LiStack;
    Li->data = a;
    Li->next = Stack->next;
    Stack->next = Li;
    return true;
}

double Li_Pop(LiStack_ptr & Stack){
    if (Stack->next == NULL)
        return false;
    double a = Stack->next->data;
    Stack->next = Stack->next->next;
    return a;
}

double Li_GetTop(LiStack_ptr & Stack){
    if (Stack->next == NULL)
        return false;
    double a = Stack->next->data;
    return a;
}

bool Li_DelStack(LiStack_ptr & Stack){
    LiStack_ptr p,q;
    p=Stack;
    q=Stack->next;
    while (q){
        p->next = q->next;
        delete q;
        q=p->next;
    }
    delete p;
    return true;
}