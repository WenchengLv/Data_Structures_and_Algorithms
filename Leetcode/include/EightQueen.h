//
// Created by lv on 2021/4/13.
//

//想用马踏棋盘来解决八皇后问题，但发现从第一行起最多只能走5步

#ifndef LEETCODE_EIGHTQUEEN_H
#define LEETCODE_EIGHTQUEEN_H
#include <set>
#include <vector>

using namespace std;

#define X 8
#define Y 8

int chess[X][Y];

struct point{
    int x,y;
    point(int a_x,int b_y):x(a_x),y(b_y){}
};

set<int> row,col;
vector<point> point_vecotr;

int nextxy(int & x , int & y , int count){
    switch (count) {
        case 0:
            if (x+2<=X-1 && y-1>=0 && chess[x+2][y-1]==0){
                x=x+2;
                y=y-1;
                return 1;
            }
            break;
        case 1:
            if (x+2<=X-1 && y+1<=Y-1 && chess[x+2][y+1]==0){
                x=x+2;
                y=y+1;
                return 1;
            }
            break;
        case 2:
            if (x+1<=X-1 && y+2<=Y-1 && chess[x+1][y+2]==0){
                x=x+1;
                y=y+2;
                return 1;
            }
            break;
        case 3:
            if (x-1>=0 && y+2<=Y-1 && chess[x-1][y+2]==0){
                x=x-1;
                y=y+2;
                return 1;
            }
            break;
        case 4:
            if (x-2>=0 && y+1<=Y-1 && chess[x-2][y+1]==0){
                x=x-2;
                y=y+1;
                return 1;
            }
            break;
        case 5:
            if (x-2>=0 && y-1>=0 && chess[x-2][y-1]==0){
                x=x-2;
                y=y-1;
                return 1;
            }
            break;
        case 6:
            if (x-1>=0 && y-2>=0 && chess[x-1][y-2]==0){
                x=x-1;
                y=y-2;
                return 1;
            }
            break;
        case 7:
            if (x+1<=X-1 && y-2>=0 && chess[x+1][y-2]==0){
                x=x+1;
                y=y-2;
                return 1;
            }
            break;
        default:
            break;
    }
    return 0;
}

void print(){
    for (int i=0;i<X;i++){
        for (int j=0;j<Y;j++){
            printf("%2d\t",chess[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int TravelChess(int & x,int & y,int tag){
    int x1=x,y1=y,count=0,flag=0;


    if (row.empty() && col.empty() && point_vecotr.empty())
    {   row.insert(x);
        col.insert(y);
        point_vecotr.push_back(point(x,y));
    }else{
        if (row.count(x1) || col.count(y1))
            return 0;
        for (auto iter = point_vecotr.begin();iter != point_vecotr.end() ; ++iter){
            if ((x1-iter->x)==(y1-iter->y) || (x1-iter->x)==(iter->y-y1))
                return 0;
        }
        row.insert(x1);
        col.insert(y1);
        point_vecotr.push_back(point(x1,y1));
    }

    chess[x][y] = tag;

    std::cout<<tag<<std::endl;

    if (8== tag){
        print();
        return 0;
    }
    flag = nextxy(x1,y1,count);
    while (0==flag && count<=7){
        count++;
        flag = nextxy(x1,y1,count);
    }

    while (flag){
        if (TravelChess(x1,y1,tag+1)){
            return 1;
        }
        x1=x;
        y1=y;
        count++;

        flag = nextxy(x1,y1,count);
        while (0==flag && count<=7){
            count++;
            flag = nextxy(x1,y1,count);
        }
    }
    if (0==flag){
        chess[x][y]=0;
    }
    return 0;

}



class Solution {
public:
    int EightQueen() {
        int x=0,y=5;
        TravelChess(x,y,1);
//        for (int i=0 ; i<Y ; i++){
//            int x=0,y=i;
//            //TravelChess(x,y,1);
//
//            row.clear();
//            col.clear();
//            point_vecotr.clear();
//        }
    }
};



#endif //LEETCODE_EIGHTQUEEN_H
