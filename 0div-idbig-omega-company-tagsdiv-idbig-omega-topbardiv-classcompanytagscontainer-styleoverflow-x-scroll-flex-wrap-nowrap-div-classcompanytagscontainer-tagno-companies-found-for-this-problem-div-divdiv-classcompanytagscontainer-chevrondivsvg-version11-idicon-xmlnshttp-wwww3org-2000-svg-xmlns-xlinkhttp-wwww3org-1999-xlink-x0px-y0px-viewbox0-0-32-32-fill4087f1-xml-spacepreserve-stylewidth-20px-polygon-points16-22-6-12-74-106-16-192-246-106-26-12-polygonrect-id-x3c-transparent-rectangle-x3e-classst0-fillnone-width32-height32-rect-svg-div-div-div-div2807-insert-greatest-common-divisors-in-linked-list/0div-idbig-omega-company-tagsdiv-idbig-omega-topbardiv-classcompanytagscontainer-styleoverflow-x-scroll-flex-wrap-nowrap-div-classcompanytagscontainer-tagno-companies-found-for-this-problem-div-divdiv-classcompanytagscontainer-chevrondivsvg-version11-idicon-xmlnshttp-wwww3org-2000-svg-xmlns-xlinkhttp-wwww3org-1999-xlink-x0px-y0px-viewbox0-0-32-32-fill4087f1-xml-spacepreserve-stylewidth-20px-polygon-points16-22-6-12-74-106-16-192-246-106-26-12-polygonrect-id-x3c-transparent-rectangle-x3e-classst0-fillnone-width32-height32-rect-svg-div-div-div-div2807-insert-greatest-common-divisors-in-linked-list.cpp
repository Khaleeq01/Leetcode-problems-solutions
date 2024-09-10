class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        auto head_copy=head;
        while(head!=NULL && head->next!=NULL){
            int gcd=__gcd(head->val,head->next->val);
            auto curr_next=head->next;
            head->next=new ListNode(gcd,curr_next);
            head=head->next->next;
        }
        head=head_copy;
        return head;
    }
};