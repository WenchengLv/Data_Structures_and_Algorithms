#include <iostream>
#include "string"
#include "DSF.h"

int main() {
    for (int i=0;i<X;i++){
        for (int j=0;j<Y;j++){
            chess[i][j]=0;
        }
    }
    int x=2,y=0;

    TravelChess(x,y,1);
    print();
std::cout<<"hello"<<std::endl;
    return 0;
}
