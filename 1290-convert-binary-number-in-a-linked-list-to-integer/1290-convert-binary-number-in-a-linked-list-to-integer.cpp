class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        int ans=0;
        while(temp!=NULL){
          ans+=(temp->val)*pow(2,--len);
            temp=temp->next;
         }
        return ans;
    }
};