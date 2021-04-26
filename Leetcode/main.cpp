#include <iostream>
#include "string"
#include "include/dp/198.h"

int main() {
//    for (int i=0;i<X;i++){
//        for (int j=0;j<Y;j++){
//            chess[i][j]=0;
//        }
//    }
//    int x=2,y=4;
//
//    TravelChess(x,y,1);
////    print();

    vector<int> tmp{2,7,9,3,1};
    Solution solution;

    std::cout<< solution.rob(tmp) <<std::endl;
    return 0;
}
