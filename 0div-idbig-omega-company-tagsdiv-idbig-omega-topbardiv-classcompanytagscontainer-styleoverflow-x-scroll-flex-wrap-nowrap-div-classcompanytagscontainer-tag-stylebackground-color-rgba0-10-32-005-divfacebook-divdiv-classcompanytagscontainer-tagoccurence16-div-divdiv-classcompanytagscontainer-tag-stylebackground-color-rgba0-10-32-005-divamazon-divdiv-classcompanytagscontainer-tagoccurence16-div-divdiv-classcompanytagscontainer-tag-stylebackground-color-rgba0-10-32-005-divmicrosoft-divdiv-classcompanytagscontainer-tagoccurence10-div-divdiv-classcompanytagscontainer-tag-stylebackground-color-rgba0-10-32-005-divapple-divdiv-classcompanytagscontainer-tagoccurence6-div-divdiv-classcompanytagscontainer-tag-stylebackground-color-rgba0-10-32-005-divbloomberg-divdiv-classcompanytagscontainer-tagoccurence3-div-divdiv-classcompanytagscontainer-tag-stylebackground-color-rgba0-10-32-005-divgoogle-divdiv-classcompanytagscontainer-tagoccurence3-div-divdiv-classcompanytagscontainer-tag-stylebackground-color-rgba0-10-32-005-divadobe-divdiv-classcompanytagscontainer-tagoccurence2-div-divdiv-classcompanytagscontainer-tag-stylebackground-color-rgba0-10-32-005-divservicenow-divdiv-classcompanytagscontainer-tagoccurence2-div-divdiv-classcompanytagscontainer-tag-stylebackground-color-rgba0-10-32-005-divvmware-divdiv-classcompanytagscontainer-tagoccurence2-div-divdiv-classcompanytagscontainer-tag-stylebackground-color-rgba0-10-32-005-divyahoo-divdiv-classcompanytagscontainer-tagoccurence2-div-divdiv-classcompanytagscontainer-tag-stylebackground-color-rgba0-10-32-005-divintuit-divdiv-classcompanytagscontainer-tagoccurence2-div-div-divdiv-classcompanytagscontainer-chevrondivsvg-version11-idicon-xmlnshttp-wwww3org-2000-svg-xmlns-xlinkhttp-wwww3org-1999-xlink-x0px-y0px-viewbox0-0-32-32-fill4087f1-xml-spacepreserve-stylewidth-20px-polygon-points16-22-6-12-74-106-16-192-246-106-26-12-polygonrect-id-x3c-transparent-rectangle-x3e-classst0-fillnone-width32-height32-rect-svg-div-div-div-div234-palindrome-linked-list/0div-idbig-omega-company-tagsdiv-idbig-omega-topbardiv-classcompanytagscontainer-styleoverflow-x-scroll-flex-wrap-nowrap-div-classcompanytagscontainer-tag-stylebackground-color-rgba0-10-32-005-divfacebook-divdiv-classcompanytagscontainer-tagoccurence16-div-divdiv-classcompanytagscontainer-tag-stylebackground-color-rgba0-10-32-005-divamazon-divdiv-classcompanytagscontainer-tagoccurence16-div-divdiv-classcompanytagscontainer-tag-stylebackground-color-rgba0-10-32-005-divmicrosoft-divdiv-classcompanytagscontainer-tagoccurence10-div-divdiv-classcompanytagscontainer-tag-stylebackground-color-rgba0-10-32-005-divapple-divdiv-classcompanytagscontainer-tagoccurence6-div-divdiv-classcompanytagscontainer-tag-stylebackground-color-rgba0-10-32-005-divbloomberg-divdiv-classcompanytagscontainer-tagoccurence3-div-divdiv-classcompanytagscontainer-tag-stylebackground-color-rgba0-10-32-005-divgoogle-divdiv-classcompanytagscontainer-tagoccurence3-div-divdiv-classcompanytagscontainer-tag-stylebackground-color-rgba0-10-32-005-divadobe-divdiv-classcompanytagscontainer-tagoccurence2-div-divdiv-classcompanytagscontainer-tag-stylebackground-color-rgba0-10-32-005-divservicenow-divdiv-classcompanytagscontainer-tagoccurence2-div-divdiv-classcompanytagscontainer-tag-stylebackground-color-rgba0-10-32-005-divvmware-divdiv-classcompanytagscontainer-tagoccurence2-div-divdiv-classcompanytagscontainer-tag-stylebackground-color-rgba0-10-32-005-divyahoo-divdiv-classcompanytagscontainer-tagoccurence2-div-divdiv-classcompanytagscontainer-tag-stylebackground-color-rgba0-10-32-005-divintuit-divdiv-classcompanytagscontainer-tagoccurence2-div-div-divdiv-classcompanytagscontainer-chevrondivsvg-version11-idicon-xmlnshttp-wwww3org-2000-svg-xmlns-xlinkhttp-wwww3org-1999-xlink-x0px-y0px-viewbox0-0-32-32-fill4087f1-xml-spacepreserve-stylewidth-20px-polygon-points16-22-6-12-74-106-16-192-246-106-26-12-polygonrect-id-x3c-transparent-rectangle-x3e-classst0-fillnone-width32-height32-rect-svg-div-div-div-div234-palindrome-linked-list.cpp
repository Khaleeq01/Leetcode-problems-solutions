class Solution {
public:
    ListNode* reverse(ListNode* head2) {
        ListNode* prev = NULL;
        ListNode* curr = head2;
        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dummy=head;
        while(slow!=NULL){
            if(dummy->val!=slow->val) return false;
            dummy=dummy->next;
            slow=slow->next;
        }
        return true;
    }
};