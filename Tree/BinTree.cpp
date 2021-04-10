//
// Created by lv on 2021/4/10.
//
#include "BinTree.h"
#include <iostream>

void createTree(BiTree & T){
    char c;
    scanf("%c",&c);

    if (' ' == c ){
        T=NULL;
    }else{
        T = new BitNode;
        T->data = c;
        createTree(T->lchild);
        createTree(T->rchild);
    }
}

void display(char data,int level){
    std::cout<< data << level << std::endl;
}

void PreOrderTraverse(BiTree & T,int level){
    if(T) {
        display(T->data, level);
        level++;
        PreOrderTraverse(T->lchild, level);
        PreOrderTraverse(T->rchild, level);
    }else{
        return;
    }
}