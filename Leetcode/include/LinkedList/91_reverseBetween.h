//
// Created by lv on 2021/9/6.
//

#ifndef LEETCODE_91_REVERSEBETWEEN_H
#define LEETCODE_91_REVERSEBETWEEN_H

//新建node，浪费内存

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;

        ListNode * tmp_head =new ListNode;
        tmp_head->next = head;

        ListNode * tmp = tmp_head;
        ListNode * LL_left = new ListNode;
        ListNode * LL_right = new ListNode;
        ListNode * last = new ListNode;

        int id = 1;
        bool flag= false;

        while (tmp != NULL){
            if (id == left){
                flag = true;
                LL_left = tmp;
                tmp = tmp->next;
                LL_right = tmp;
                last = tmp;
                while (left != right){
                    tmp = tmp->next;
                    ListNode * node = new ListNode;
                    node->val = tmp->val;
                    node->next = last;
                    last = node;
                    left++;
                }
                LL_left->next = last;
                LL_right->next = tmp->next;

            }
            if (flag == true)
                break;
            tmp=tmp->next;
            id++;
        }

        return tmp_head->next;

    }
};


#endif //LEETCODE_91_REVERSEBETWEEN_H
