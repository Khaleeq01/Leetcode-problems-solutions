class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int ind=0;
        ListNode* prevLeft=NULL;
        ListNode* right=NULL;
        ListNode* head=list1;
        while(head!=NULL){
            if(ind==a-1) prevLeft=head;
            if(ind==b+1) right=head;
            head=head->next;
            ind++;
        }
        
        ListNode* endList2=list2;
        while(endList2->next!=NULL){
            endList2=endList2->next;
        }
        prevLeft->next=list2;
        endList2->next=right;
        return list1;
    }
};