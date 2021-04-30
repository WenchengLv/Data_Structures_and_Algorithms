//
// Created by lv on 2021/4/30.
//

#ifndef LEETCODE_32_LONGESTVALIDPARENTHESES_H
#define LEETCODE_32_LONGESTVALIDPARENTHESES_H

#include <vector>
#include <string>
using namespace std;

//Solution solution;
//std::cout<< solution.longestValidParentheses("()(())") <<std::endl;
//题目理解错误了，这个(())也算
class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.empty())
            return 0;
        int sum=0;
        for (int i = 0 ; i < s.size() ; i++){
            if (s[i] == '(' && s[i+1] == ')'){
                int j=i;
                while (j+3 < s.size() && s[j+2] == s[j] && s[j+3] == s[j+1] ){
                    j=j+2;
                }
                sum=max(sum,j-i+2);
            }
        }
        return sum;
    }
};

#endif //LEETCODE_32_LONGESTVALIDPARENTHESES_H
