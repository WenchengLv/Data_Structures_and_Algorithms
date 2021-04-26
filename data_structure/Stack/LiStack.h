//
// Created by lv on 2021/4/4.
//

#ifndef STACK_AND_QUEUE_LISTACK_H
#define STACK_AND_QUEUE_LISTACK_H


struct LiStack {
    double data;
    LiStack *next;
};

typedef  struct LiStack *LiStack_ptr;

bool Li_InitStack(LiStack_ptr & Stack);
bool Li_StackEmpty(LiStack_ptr & Stack);
bool Li_Push(LiStack_ptr & Stack,double  a);
double Li_Pop(LiStack_ptr & Stack);
double Li_GetTop(LiStack_ptr & Stack);
bool Li_DelStack(LiStack_ptr & Stack);


#endif //STACK_AND_QUEUE_LISTACK_H}


