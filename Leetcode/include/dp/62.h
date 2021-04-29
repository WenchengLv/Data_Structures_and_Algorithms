//
// Created by lv on 2021/4/29.
//

#ifndef LEETCODE_62_H
#define LEETCODE_62_H

#include <vector>
#include <iostream>

using namespace std;

//int m=6,n=3;
//Solution solution;
//std::cout<< solution.uniquePaths(3,3) <<std::endl;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        for (int i = 0 ; i < m ; i++){
            dp[i][0] = 1;
        }
        for (int j = 0 ; j < n ; j++){
            dp[0][j] = 1;
        }
        for (int i = 1 ; i < m ; i++){
            for (int j = 1 ; j < n; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

#endif //LEETCODE_42_H
