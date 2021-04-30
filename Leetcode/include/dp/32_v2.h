//
// Created by lv on 2021/4/30.
//

#ifndef LEETCODE_32_V2_H
#define LEETCODE_32_V2_H

#include <vector>
#include <string>
#include <stack>
using namespace std;

//"()(()" 惜败

class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.empty())
            return 0;
        int result=0;
        int tmp=0;
        for (int i=0 ; i<s.size() ; i++){
            stack<char> st;
            int j=i;
            while (1){
                if (j<s.size()){
                    if (st.empty() && s[j] == ')'){
                        break;
                    }
                    if (s[j] == '('){
                        st.push(s[j]);
                    }
                    if (s[j] == ')'){
                        st.pop();
                    }
                    j++;
                }else{
                    tmp = st.size();
                    break;
                }

            }
            result = max(result,j-i-tmp);
        }
        return result;
    }
};

#endif //LEETCODE_32_V2_H
