class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        int maxSum=0; //to store sum of indices i,j
        unordered_map<int,vector<int>>sumToElements;// to store cell no and its corresponding MAXSUM of i+j
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                maxSum=max(maxSum,i+j);
                sumToElements[i+j].push_back(nums[i][j]);//push back corresponding cellNo into map
            }
        }
        //iterate to the maxSum
        for(int i=0;i<=maxSum;i++){
            //iterate to map 
            for(auto el:sumToElements[i]){
             ans.push_back(el);   
            }
        }
        return ans;
    }
};