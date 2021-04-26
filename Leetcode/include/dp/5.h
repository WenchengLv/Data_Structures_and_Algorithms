//
// Created by lv on 2021/4/26.
//

#ifndef LEETCODE_5_H
#define LEETCODE_5_H

//5. 最长回文子串

//运算时间超时（双重循环，无限迭代）
//false

//    5.h
//    string s="abccdccba";
//    Solution solution;
//    std::cout<< solution.longestPalindrome(s) <<std::endl;

#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start,length=0;
        if (s.empty())
            return "";
        int size_s = s.size();
        if (size_s == 1)
            return s;
        for (int i = 0;i < size_s;i++){
            for (int j=i ; j<size_s ; j++){
                if (judge(s,i,j)){
                    if (j-i+1 > length){
                        length=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,length);
    }

    bool judge(string s,int i,int j){
        if (i == j){
            return true;
        }
        if (j == i+1){
            if (s[i] == s[j])
                return true;
            return false;
        }
        if (s[i] == s[j]){
            if (judge(s,i+1,j-1)){
                return true;
            } else{
                return false;
            }
        }else{
            return false;
        }
    }
};

#endif //LEETCODE_5_H
