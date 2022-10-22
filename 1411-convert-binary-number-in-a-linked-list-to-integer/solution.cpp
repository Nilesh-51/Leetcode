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
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
        int sum=0,i=0;
        while(head){
            sum+=(head->val)*pow(2,i++);
            head=head->next;
        }
        return sum;
    }
    ListNode* reverse(ListNode* node){
    ListNode *cur=node;
    ListNode *pre=NULL,*nxt=NULL;
    do{
        nxt=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
    }while(nxt!=NULL);
    node=pre;
        return node;
    }
};
