//
// Created by lv on 2021/4/10.
//

#ifndef TREE_BINTREE_H
#define TREE_BINTREE_H

struct BitNode{
    char data;
    struct BitNode *lchild,*rchild;
};
typedef struct BitNode *BiTree;

void createTree(BiTree & T);
void PreOrderTraverse(BiTree & T,int level);


#endif //TREE_BINTREE_H
