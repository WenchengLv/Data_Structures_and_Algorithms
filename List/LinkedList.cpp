//
// Created by lv on 2021/4/3.
//
#include <iostream>
#include "LinkedList.h"

bool Get_Elem(LinkList & L,int i,double *num){
    int j=0;

    LinkList p = new struct Node;
    //std::cout <<  p->next << std::endl;
    p=L->next;
    //std::cout <<  p->next << std::endl;
    //std::cout <<  L->next->next << std::endl;
    while(p && j<i){
        p=p->next;
        j++;
    }
    if(!p)
    {
        return false;
    }
    *num=p->data;
    delete p;
    return true;
}

bool delete_num(LinkList & L,int i,double *num){
    int j=0;

    LinkList p = new struct Node;
    p=L;

    while((p->next)&& j<i){
        p=p->next;
        j++;
    }
    if(!(p->next))
        return false;
//这里有一个问题，先赋值，之后改变指针
//    p->next=p->next->next;
//    *num=p->next->data;
    *num=p->next->data;
    p->next=p->next->next;

    return true;
}

void create_list(LinkList & L,int n) {
    //std::cout << &L << std::endl;
    L->next = NULL;
    for (int i = 1; i <= n; i++) {
        LinkList tmp = new struct Node;
        tmp->data = i * 1.1;
        tmp->next = L->next;
        L->next = tmp;
    }
    return;
}

bool insert_num(LinkList & L,int i,double num){
    int j=0;

    //新建一个用来遍历
    LinkList p = new struct Node;
    p=L;

    while((p->next) && j<i){
        p=p->next;
        j++;
    }
    if(!(p->next))
        return false;

    LinkList tmp=new struct Node;

    tmp->data=num;
    tmp->next=p->next;
    p->next=tmp;

    return true;
}

//有一个问题，怎么释放内存
bool clearList(LinkList & L){
    LinkList tmp1=new struct Node;
    LinkList tmp2=new struct Node;

    tmp1=L->next;

    while(tmp1){
        tmp2=tmp1->next;
        delete tmp1;
        //delete L->next;
        //L->next=L->next->next;

        //为什么delete之后还有tmp1，delete的是tmp1的地址，newd
        tmp1=tmp2;
    }
    L->next=NULL;
}