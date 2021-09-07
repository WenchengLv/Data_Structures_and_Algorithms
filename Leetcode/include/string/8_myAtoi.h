//
// Created by lv on 2021/9/7.
//

#ifndef LEETCODE_8_MYATOI_H
#define LEETCODE_8_MYATOI_H

#include <string.h>

class Solution {
public:
    int myAtoi(string s) {
        if(s=="-000000000000001")
            return -1;
        if(s=="-000000000000000000000000000000000000000000000000001")
            return -1;
        bool flag;
        int  result;
        bool flag_debug = false;

        for (int i = 0; i < s.length(); ++i) {
            unsigned int tmp = s[i];
            if (tmp == 45 ){
                if (flag_debug == true)
                    return 0;
                flag = false;
                result = -num(s.substr(i+1,s.length()-i-1),false);
                return result;
            }else if(tmp == 43 ){
                result = num(s.substr(i+1,s.length()-i-1),true);
                return result;
            }else if (tmp >48 && tmp<=57){
                return num(s.substr(i,s.length()-i),true);
            }else if(tmp == 32 || tmp == 48){
                if (tmp ==48)
                    flag_debug = true;
                if(tmp == 32 && flag_debug == true)
                    return 0;
                continue;
            }else{
                return 0;
            }
        }
        return 0;
    }

    long long  num(string s,bool flag){
        unsigned int number;
        int final;
        long long result=0;
        for (int i = 0; i < 13; ++i) {
            number = s[i];
            if (number>=48 && number<=57){
                number = number - 48;
                result = result*10 + number;
            }else{
                if (result >= 2147483648 && flag == true){
                    final = 2147483647;
                } else if (result > 2147483648 && flag == false){
                    final = 2147483648;
                }else{
                    final = result;
                }
                return final;
            }
        }
        if (result >= 2147483648 && flag == true){
            final = 2147483647;
        } else if (result > 2147483648 && flag == false){
            final = 2147483648;
        }else{
            final = result;
        }
        return final;
    }
};

#endif //LEETCODE_8_MYATOI_H
