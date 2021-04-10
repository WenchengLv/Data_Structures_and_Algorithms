#include <iostream>
//#include "SqStack.h"
#include "LiStack.h"


int main() {
//    SqStack L;
//    std::cout << &L << std::endl;
//    InitStack(L);
//
//    for (int i=1; i<=10; i++){
//        double a=1.1*i;
//        Push(L,a);
//    }


    LiStack_ptr Li = new struct LiStack;
    std::cout << &Li << std::endl;

    for (int i=1;i<=11;i++){
        Li_Push(Li,i*1.1);
    }
    //Li_DelStack(Li);
    std::cout << Li_StackEmpty(Li) << std::endl;
    std::cout << &Li << std::endl;
    //std::cout << Li_Pop(Li)<< std::endl;
    //std::cout << Li_GetTop(Li) << std::endl;

    return 0;
}
