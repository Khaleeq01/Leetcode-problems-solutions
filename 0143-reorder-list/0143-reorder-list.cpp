class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL,*curr=head,*forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        //calculate the midddle of linked list
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse linked list after middle and craete two independent Linked list
        ListNode* second=reverse(slow->next);
        slow->next=NULL;
        ListNode* first=head;
        // merging two linked list
        while(second){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
    }
};