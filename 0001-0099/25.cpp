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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1||head==NULL){
            return head;
        }
        int count=0;
        ListNode* n=head;
        for(count;count<k;count++){
            if(n==NULL){
                return head;
            }
            n=n->next;
        }
        ListNode* p=head;
        ListNode* t=head->next;
        n=head->next->next;
        for(count=1;count<k;++count){
            t->next=p;
            if(count+1!=k){
                p=t;
                t=n;
                n=n->next;
            }
        }
        head->next=reverseKGroup(n, k);
        return t;
    }
};
