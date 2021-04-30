//
// Created by lv on 2021/4/30.
//

#ifndef LEETCODE_70_CLIMBSTAIRS_H
#define LEETCODE_70_CLIMBSTAIRS_H

//Solution solution;
//std::cout<< solution.climbStairs(3) <<std::endl;

#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;

        vector<int> dp;
        dp.resize(n);
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2 ; i < n ; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n-1];
    }
};

#endif //LEETCODE_70_CLIMBSTAIRS_H
