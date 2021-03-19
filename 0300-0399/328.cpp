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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr||head->next->next==nullptr)
            return head;
        ListNode* even=head->next;
        ListNode* tagO=even->next;
        head->next=tagO;
        ListNode* tagE=even;
        ListNode* t=nullptr;
        while(tagE->next!=nullptr&&tagO->next!=nullptr){
            t=tagO->next;
            tagE->next=t;
            tagE=t;
            if(t->next!=nullptr){
                tagO->next=t->next;
                tagO=t->next;
            }
        }
        tagO->next=even;
        tagE->next=nullptr;
        return head;
    }
};
