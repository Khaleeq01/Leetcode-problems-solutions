class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL,*curr=head,*forward=NULL;
        while(curr!=NULL){
           forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
};