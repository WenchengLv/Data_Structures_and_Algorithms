//
// Created by lv on 2021/4/28.
//

#ifndef LEETCODE_42_H
#define LEETCODE_42_H

#include <vector>
#include <iostream>
#include <stack>

using namespace std;

//vector<int> a={3,2,1,1,3};
//Solution solution;
//std::cout<< solution.trap(a) <<std::endl;

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        stack<int> stk;
        int n = height.size();
        for (int i = 0; i < n; ++i) {
            while (!stk.empty() && height[i] > height[stk.top()]) {
                int top = stk.top();
                stk.pop();
                if (stk.empty()) {
                    break;
                }
                int left = stk.top();
                int currWidth = i - left - 1;
                int currHeight = min(height[left], height[i]) - height[top];
                ans += currWidth * currHeight;
            }
            stk.push(i);
        }
        return ans;
    }
};

#endif //LEETCODE_42_H
