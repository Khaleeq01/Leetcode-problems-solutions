class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        priority_queue<int>pq;
        long long sum=0;// sum variable is taken to decide whether to break number or not
        //push element into max heap
        for(int i=nums.size()-1;i>=0;i--){
            pq.push(nums[i]);
            sum+=nums[i];
        }
        int ans=0;
        while(target>0){
            int front=pq.top();
            sum-=front;
            pq.pop();
            //case 1 if front is less than or equal to target then no need to divide into half just subtract front from sum
            if(front<=target){
                target-=front;
            }
            //case 2 if front is greater than target and sum is less than target then in this case we split target into two halves
            else if(front>target && sum<target){
                ans++;
                sum+=front;
                pq.push(front/2);
                pq.push(front/2);
            }
            //case 3 if pq is empty and we have not reached our target then return -1
            if(pq.empty() && target!=0){
                return -1;
            }
        }
        return ans;
    }
};