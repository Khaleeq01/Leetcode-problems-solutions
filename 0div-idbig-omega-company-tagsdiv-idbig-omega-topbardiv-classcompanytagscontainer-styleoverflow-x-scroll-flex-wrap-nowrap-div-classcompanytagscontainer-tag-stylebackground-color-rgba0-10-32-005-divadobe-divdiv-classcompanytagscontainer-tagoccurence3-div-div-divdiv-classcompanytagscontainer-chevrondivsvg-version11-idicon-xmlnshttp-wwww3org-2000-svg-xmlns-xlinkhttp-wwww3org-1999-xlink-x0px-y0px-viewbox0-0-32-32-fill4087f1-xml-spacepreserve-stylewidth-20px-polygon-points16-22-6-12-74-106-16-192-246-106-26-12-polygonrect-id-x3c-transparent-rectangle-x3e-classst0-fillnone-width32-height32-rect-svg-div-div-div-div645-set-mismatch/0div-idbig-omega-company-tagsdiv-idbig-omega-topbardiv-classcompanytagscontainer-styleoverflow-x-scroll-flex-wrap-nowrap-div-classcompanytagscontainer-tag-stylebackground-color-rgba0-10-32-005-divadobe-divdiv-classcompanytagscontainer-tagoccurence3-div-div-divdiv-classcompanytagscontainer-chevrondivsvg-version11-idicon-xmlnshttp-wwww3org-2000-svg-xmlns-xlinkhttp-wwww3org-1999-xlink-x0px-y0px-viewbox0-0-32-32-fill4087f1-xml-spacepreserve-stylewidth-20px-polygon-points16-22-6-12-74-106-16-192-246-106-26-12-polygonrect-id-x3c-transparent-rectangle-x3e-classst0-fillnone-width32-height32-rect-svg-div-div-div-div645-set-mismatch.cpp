class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup=-1,missing=-1;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i)
                    count++;
            }
            if(count==2){
                dup=i;
            }
            else if(count==0){
                missing=i;
            }
        }
        return {dup,missing};
    }
};