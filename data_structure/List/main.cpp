#include <iostream>
#include "LinkedList.h"
#include "staticList.h"


int main() {

//    //结构体要用new来创建
//    LinkList L=new struct Node;
//    create_list(L,8);
//
//    //(*L)->next= nullptr;
//
//   double a,b;
//   //insert_num(L,0,10.0);
//   //delete_num (L,2, &a);
//   if(Get_Elem(L,7,&b))
//       std::cout << "Hello, World!" <<b<<std::endl;
//   clearList(L);
//   delete L;


    StaticList *StaticLinkedList[MAX_SIZE]= new StaticList[MAX_SIZE];

    //static全局变量和另外两个cpp中地址竟然不一样
//    initStaticList(10);
//    std::cout << &StaticLinkedList[0]<<std::endl;

   return 0;
}
