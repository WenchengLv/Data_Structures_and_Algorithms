//
// Created by lv on 2021/4/26.
//

//打家劫舍

//     198.h
//    vector<int> tmp{2,7,9,3,1};
//    Solution solution;
//    std::cout<< solution.rob(tmp) <<std::endl;


#ifndef LEETCODE_198_H
#define LEETCODE_198_H

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        if(nums.empty())
            return 0;
//        if (n == 1)
//            dp[0] = nums[0];
//        if (n == 2)
//            dp[1] = max(nums[0],nums[1]);
//        for (int i = 2 ; i < n ; i++){
//            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
//        }

        if (n == 1)
            return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        for (int i = 2 ; i < n ; i++){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    };
};

#endif //LEETCODE_198_H
