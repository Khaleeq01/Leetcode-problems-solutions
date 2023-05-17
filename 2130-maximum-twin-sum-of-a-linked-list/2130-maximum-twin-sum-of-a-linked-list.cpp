class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL,*curr=head,*forward;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
      ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow);
        int maxi=0;
        while(rev!=NULL){
            maxi=max(maxi,head->val+rev->val);
            rev=rev->next;
            head=head->next;
        }
        return maxi;
    }
};