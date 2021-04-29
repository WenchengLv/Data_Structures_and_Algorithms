//
// Created by lv on 2021/4/29.
//

#ifndef LEETCODE_62_H
#define LEETCODE_62_H

//vector<vector<int>> dp(3,vector<int>(3,0));
//dp[1][1] = 1;
//Solution solution;
//std::cout<< solution.uniquePathsWithObstacles(dp) <<std::endl;

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid.size()==1 && obstacleGrid[0].size()==1 && obstacleGrid[0][0] == 0){
            return 1;
        }
        if (obstacleGrid.size()==1 && obstacleGrid[0].size()==1 && obstacleGrid[0][0] == 1){
            return 0;
        }
        int m = obstacleGrid.size()+1;
        int n = obstacleGrid[0].size()+1;
        vector<vector<int>> dp(m,vector<int>(n,0));
        {
            for (int i = 1 ; i < m ; i++){
                for (int j = 1 ; j < n ; j++){
                    //1，1为特殊情况，忘加了else
                    if (1==i && 1==j){
                        if (obstacleGrid[0][0] == 1)
                            return 0;
                        dp[i][j] = 1;
                    }else{
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                        if (obstacleGrid[i-1][j-1] == 1)
                            dp[i][j] = 0;
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};

#endif