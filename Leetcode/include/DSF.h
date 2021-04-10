//
// Created by lv on 2021/4/10.
//

#ifndef LEETCODE_DSF_H
#define LEETCODE_DSF_H

#define X 6
#define Y 6

int chess[X][Y];

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
    chess[x][y] = tag;
    if (X*Y == tag){
        return 1;
    }
    //
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

#endif //LEETCODE_DSF_H
