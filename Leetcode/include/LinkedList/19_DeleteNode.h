//
// Created by lv on 2021/8/22.
//

#ifndef LEETCODE_19_DELETENODE_H
#define LEETCODE_19_DELETENODE_H


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr){
            head= nullptr;
            return head;
        }

        ListNode *tmp ;
        ListNode *tmp_n;

        tmp = head;
        tmp_n = head;

        for (int i = 0 ;i < n ; i++){
            if (tmp_n->next != nullptr){
                tmp_n = tmp_n->next;
            }else{
                head = head->next;
            }
        }

        while (tmp_n->next){
            tmp = tmp->next;
            tmp_n = tmp_n->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
};

#endif //LEETCODE_19_DELETENODE_H
