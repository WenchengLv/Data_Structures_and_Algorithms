//
// Created by lv on 2021/4/2.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H


struct Node{
    double data;
    Node* next;
};
typedef struct Node *LinkList;

bool Get_Elem(LinkList & L,int i,double *num);
void create_list(LinkList & L,int n);
bool delete_num(LinkList & L,int i,double *num);
bool insert_num(LinkList & L,int i,double num);
bool clearList(LinkList & L);

//
//bool insert_num(LinkList *L,int i,double num){
//    int j=0;
//
//    LinkList p;
//    p=(*L);
//
//    while((p->next) && j<i){
//        p=->next;
//        j++;
//    }
//    if(!(p->next))
//        return false;
//
//    LinkList tmp=new struct Node;
//
//    tmp->data=num;
//    tmp->next=p->next;
//    p->next=tmp;
//
//    return true;
//}

//bool delete_num(LinkList *L,int i,double *num){
//    int j=0;
//
//    LinkList p=new struct Node;
//    p=(*L);
//
//    while(p && j<i){
//        p=p->next;
//        j++;
//    }
//    if(!p)
//        return false;
//
//    p->next=p->next->next;
//    *num=p->next->data;
////delete p;
//    return true;
//}

//bool delete_num(LinkList *L,int i,double *num){
//    int j=0;
//
//    while((*L) && j<i){
//        (*L)=(*L)->next;
//        j++;
//    }
//    if(!(*L))
//        return false;
//
//    (*L)->next=(*L)->next->next;
//    *num=(*L)->next->data;
////delete p;
//    return true;
//}

//void create_list(LinkList *L,int n){
//    (*L)->next=NULL;
//    for (int i=1;i<=n;i++){
//        LinkList tmp=new struct Node;
//        tmp->data=i*1.1;
//        tmp->next=(*L)->next;
//        (*L)->next=tmp;
//    }
//    return;

//
//}





#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
