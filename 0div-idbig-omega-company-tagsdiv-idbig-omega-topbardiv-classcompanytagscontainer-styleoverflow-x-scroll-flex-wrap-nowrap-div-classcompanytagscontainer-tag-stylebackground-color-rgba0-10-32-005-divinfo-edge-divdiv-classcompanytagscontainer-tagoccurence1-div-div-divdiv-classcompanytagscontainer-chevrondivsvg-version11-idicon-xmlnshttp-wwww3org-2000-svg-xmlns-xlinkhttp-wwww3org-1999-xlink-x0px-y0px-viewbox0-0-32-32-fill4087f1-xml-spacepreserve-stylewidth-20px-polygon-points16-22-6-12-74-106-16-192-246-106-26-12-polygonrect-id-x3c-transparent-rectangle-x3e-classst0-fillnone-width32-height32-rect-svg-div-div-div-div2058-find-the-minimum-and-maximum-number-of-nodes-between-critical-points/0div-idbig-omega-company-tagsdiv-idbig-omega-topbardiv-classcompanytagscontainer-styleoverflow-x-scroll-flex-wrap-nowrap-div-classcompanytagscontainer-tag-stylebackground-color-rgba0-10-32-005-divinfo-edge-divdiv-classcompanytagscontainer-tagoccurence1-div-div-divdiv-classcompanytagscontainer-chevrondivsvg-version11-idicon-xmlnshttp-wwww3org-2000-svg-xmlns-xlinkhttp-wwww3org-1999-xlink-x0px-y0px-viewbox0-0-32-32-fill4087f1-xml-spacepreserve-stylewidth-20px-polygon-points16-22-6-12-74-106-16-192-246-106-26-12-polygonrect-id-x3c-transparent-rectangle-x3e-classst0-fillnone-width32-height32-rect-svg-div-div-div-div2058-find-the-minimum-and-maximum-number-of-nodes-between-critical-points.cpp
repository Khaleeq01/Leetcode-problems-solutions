class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>result={-1,-1};
        //initialize minimum distance
        int minDistance=INT_MAX;
        ListNode* previousNode=head;
        ListNode* currentNode=head->next;
        int currentIndex=1;
        int previousCriticalIndex=0;
        int firstCriticalIndex=0;
        while(currentNode->next!=NULL){
             // Check if the current node is a local maxima or minima
            if((currentNode->val<previousNode->val && currentNode->val< currentNode->next->val) || (currentNode->val>previousNode->val && currentNode->val> currentNode->next->val)){
                 // If this is the first critical point found
                if(previousCriticalIndex==0){
                    previousCriticalIndex=currentIndex;
                    firstCriticalIndex=currentIndex;
                }
                else{
                    minDistance=min(minDistance,currentIndex-previousCriticalIndex);
                    previousCriticalIndex=currentIndex;
                }
            }
             // Move to the next node and update indices
            currentIndex++;
            previousNode=currentNode;
            currentNode=currentNode->next;
        }
          // If at least two critical points were found
        if(minDistance!=INT_MAX){
            int maxDistance=previousCriticalIndex-firstCriticalIndex;
            result={minDistance,maxDistance};
        }
        return result;
    }
};