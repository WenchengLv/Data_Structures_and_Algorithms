//
// Created by lv on 2021/4/10.
//

#ifndef TREE_BITHRTREE_H
#define TREE_BITHRTREE_H

struct BiThrNode{
    char data;
    bool ltag,rtag;
    struct BiThrNode *lchild,*rchild;
};

typedef struct BiThrNode *BiThrTree;



#endif //TREE_BITHRTREE_H
