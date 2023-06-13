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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=new ListNode();
        p->next=head;
        ListNode *f=p,*s=p;
        while(n--){
            f=f->next;
        }
        while(f->next){
            s=s->next;
            f=f->next;
        }
        f=s->next;
        s->next=f->next;
        f->next=NULL;
        delete f;
        f=NULL;
        return p->next;
    }
};
