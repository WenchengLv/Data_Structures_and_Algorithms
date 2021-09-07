//
// Created by lv on 2021/9/7.
//

#ifndef LEETCODE_141_HASCYCLE_H
#define LEETCODE_141_HASCYCLE_H

#include <iostream>
#include <unordered_set>

/**
 Definition for singly-linked list.
 **/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution1 {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;
        std::unordered_set<ListNode*> HashList;
        while (!HashList.count(head)){
            if (head->next == NULL)
                return false;
            HashList.emplace(head);
            head = head->next;
        }

        return true;
    }
};

class Solution2 {
public:
    bool hasCycle(ListNode *head) {
        class Solution {
        public:
            bool hasCycle(ListNode* head) {
                if (head == nullptr || head->next == nullptr) {
                    return false;
                }
                ListNode* slow = head;
                ListNode* fast = head->next;
                while (slow != fast) {
                    if (fast == nullptr || fast->next == nullptr) {
                        return false;
                    }
                    slow = slow->next;
                    fast = fast->next->next;
                }
                return true;
            }
        };

    }
};

#endif //LEETCODE_141_HASCYCLE_H
