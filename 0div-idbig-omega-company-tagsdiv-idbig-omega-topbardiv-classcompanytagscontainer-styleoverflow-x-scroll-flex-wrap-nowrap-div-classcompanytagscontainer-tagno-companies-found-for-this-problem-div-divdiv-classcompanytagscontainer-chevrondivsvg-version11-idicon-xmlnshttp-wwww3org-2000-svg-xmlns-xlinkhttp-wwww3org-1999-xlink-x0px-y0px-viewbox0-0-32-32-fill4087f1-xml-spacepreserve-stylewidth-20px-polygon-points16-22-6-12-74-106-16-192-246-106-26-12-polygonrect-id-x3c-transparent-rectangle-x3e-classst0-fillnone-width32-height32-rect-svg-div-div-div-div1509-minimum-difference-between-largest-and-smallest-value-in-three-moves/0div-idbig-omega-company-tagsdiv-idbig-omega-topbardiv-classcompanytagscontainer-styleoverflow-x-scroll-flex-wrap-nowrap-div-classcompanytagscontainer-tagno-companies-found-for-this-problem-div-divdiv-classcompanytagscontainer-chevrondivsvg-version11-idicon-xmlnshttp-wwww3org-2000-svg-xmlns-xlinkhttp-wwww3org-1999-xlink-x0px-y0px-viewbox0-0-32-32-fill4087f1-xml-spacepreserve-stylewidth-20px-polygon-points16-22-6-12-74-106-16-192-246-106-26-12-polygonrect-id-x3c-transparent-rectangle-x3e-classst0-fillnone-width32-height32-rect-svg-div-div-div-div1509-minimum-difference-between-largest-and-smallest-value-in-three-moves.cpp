class Solution {
public:
    int minDiff(vector<int>& nums){
        int n=nums.size();
        return min({nums[n-1]-nums[3],nums[n-2]-nums[2],nums[n-3]-nums[1],nums[n-4]-nums[0]});
    }
    int minDiffViaPq(vector<int>& nums){
        priority_queue<int>maxHeap;
        priority_queue<int,vector<int>,greater<int>>minHeap;
        for(auto el:nums){
            maxHeap.push(el);
            minHeap.push(el);
            
            if(maxHeap.size()>4) maxHeap.pop();
            if(minHeap.size()>4) minHeap.pop();
            
        }
        int l=3,r=nums.size()-4;
        while(!maxHeap.empty()){
            nums[l--]=maxHeap.top();
            maxHeap.pop();
            
            nums[r++]=minHeap.top();
            minHeap.pop();
        }
        return minDiff(nums);
    }
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        return minDiffViaPq(nums);
    }
};