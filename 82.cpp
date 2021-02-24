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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        if(head->val==head->next->val){
            ListNode* nextNode=head;
            while(nextNode!=NULL&&nextNode->val==head->val){
                nextNode=nextNode->next;
            }
            return deleteDuplicates(nextNode);
        }else{
            head->next=deleteDuplicates(head->next);
            return head;
        }
    }
};
