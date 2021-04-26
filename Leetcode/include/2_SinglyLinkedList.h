/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a,*b;
        ListNode *out=new struct ListNode;
        ListNode *c;
        ListNode *p;
        c=out;

        a=l1;
        b=l2;
        int last_flag=0;
        int last_num;
        while(a || b){
            if(a && b){
                last_num = (a->val+b->val+last_flag)%10;
                last_flag = (a->val+b->val+last_flag)/10;
            }else if( a && !b){
                last_num = (last_flag + a->val)%10;
                last_flag = (last_flag + a->val)/10;
            }else{
                last_num = (last_flag + b->val)%10;
                last_flag = (last_flag + b->val)/10;
            }
            ListNode* tmp = new struct ListNode;
            tmp->val = last_num;
            c->next = tmp;
            c=tmp;
            if(a){
                a=a->next;
            }else{
                a=nullptr;
            }
            if(b){
                b=b->next;
            }else{
                b=nullptr;
            }
        }
        if (last_flag){
            ListNode* tmp = new struct ListNode;
            tmp->val = 1;
            c->next = tmp;
            c=tmp;
        }
        return out->next;
    }
};