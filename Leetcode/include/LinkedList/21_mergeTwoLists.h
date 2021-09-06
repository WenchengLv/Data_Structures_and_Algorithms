//
// Created by lv on 2021/8/23.
//

#ifndef LEETCODE_21_MERGETWOLISTS_H
#define LEETCODE_21_MERGETWOLISTS_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        //new important
//        ListNode *head = new ListNode;
//        ListNode *point;
//        point=head;
//
//        while (!((l1->next == nullptr) && (l2->next == nullptr))){
//            if (l1->next == nullptr){
//                ListNode *tmp = new ListNode;
//                tmp->val = l2->val;
//                point->next = tmp;
//                point = tmp;
//                l2 = l2->next;
//            }else if (l2->next == nullptr){
//                ListNode *tmp = new ListNode;
//                tmp->val = l1->val;
//                point->next = tmp;
//                point = tmp;
//                l1 = l1->next;
//            }else{
//                ListNode *tmp = new ListNode;
//                if (l2->val < l1->val){
//                    tmp->val = l2->val;
//                    l2 = l2->next;
//                }else{
//                    tmp->val = l1->val;
//                    l1 = l1->next;
//                }
//                point->next = tmp;
//                point = tmp;
//            }
//        }
//        head = head->next;
//        return head;
//    }
//};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //new important
        ListNode *head = new ListNode;
        ListNode *point;
        point=head;

        while (!((l1 == nullptr) && (l2 == nullptr))){
            if (l1 == nullptr){
                ListNode *tmp = new ListNode;
                tmp->val = l2->val;
                point->next = tmp;
                point = tmp;
                l2 = l2->next;
            }else if (l2 == nullptr){
                ListNode *tmp = new ListNode;
                tmp->val = l1->val;
                point->next = tmp;
                point = tmp;
                l1 = l1->next;
            }else{
                ListNode *tmp = new ListNode;
                if (l2->val < l1->val){
                    tmp->val = l2->val;
                    l2 = l2->next;
                }else{
                    tmp->val = l1->val;
                    l1 = l1->next;
                }
                point->next = tmp;
                point = tmp;
            }
        }
        head = head->next;
        return head;
    }
};

#endif //LEETCODE_21_MERGETWOLISTS_H
