//
// Created by lv on 2021/4/10.
//
#include "BiThrTree.h"
#include <iostream>

void createThrTree(BiThrTree & T){
    char c;
    scanf("%c",&c);

    if (' ' == c ){
        T=NULL;
    }else{
        T = new BiThrNode;
        T->data = c;
        createThrTree(T->lchild);
        createThrTree(T->rchild);
    }
}