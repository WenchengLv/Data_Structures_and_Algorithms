//
// Created by lv on 2021/9/6.
//

#ifndef LEETCODE_61_ROTATERIGHT_H
#define LEETCODE_61_ROTATERIGHT_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || k==0 || head->next ==NULL)
            return head;

        ListNode * cycle = new ListNode;
        ListNode * tmp;
        ListNode * tmp_2;
        cycle = head;
        tmp = head;

        int sum = 1;
        while (tmp->next != NULL){
            sum++;
            tmp = tmp->next;
        }

        k = k%sum;
        if (k == 0)
            return head;

        tmp->next = head;

//        if(k >= sum)
//            k = k%sum;

        for (int i = 0; i < sum-k-1 ; i++){
            cycle = cycle->next;
        }

        tmp = cycle;
        cycle = tmp->next;
        tmp->next=NULL;
//        tmp_2 = cycle;
//        for (int i = 0; i < sum-1 ; i++){
//            tmp_2 = tmp_2->next;
//        }
//        tmp_2->next = NULL;

        return cycle;
    }
};

#endif //LEETCODE_61_ROTATERIGHT_H
