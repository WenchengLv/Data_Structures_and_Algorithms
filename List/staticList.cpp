//
// Created by lv on 2021/4/3.
//
#include "staticList.h"
#include <iostream>



bool initStaticList(StaticList & StaticLinkedList[],int n){
    for(int i=0;i<MAX_SIZE;i++){
        StaticLinkedList[i].cur = i+1;
    }
    for(int i=1;i<=n;i++){
        StaticLinkedList[i].data = i*2.2 ;
        std::cout << StaticLinkedList[i].data<<std::endl;
    }
    StaticLinkedList[0].cur = n+1 ;
    StaticLinkedList[MAX_SIZE-1].cur = 1;
    std::cout << &StaticLinkedList[0]<<std::endl;

    return true;
}

bool insertStaticList(int n,double num){
    int tmp=StaticLinkedList[0].cur;
    ++StaticLinkedList[0].cur;

    StaticLinkedList[tmp].data=num;
    StaticLinkedList[0].cur = StaticLinkedList[tmp].cur;

    int a = StaticLinkedList[MAX_SIZE-1].cur;
    for(int i=0;i<n-1;i++){
        a=StaticLinkedList[a].cur;
    }
    StaticLinkedList[tmp].cur=StaticLinkedList[a].cur;
    StaticLinkedList[a].cur = tmp;

    return true;
}
