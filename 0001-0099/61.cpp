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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==NULL||head->next==NULL){
            return head;
        }
        int count=1;
        ListNode* tag=head;
        while(tag->next!=NULL){
            count++;
            tag=tag->next;
        }
        if(k%count==0){
            return head;
        }
        int r=count-k%count;
        tag->next=head;
        for(;r>0;r--){
            tag=tag->next;
        }
        ListNode* result=tag->next;
        tag->next=NULL;
        return result;
    }
};
