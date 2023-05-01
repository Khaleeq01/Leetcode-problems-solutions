class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int s=0,cnt=0,n=nums.size();
        unordered_map<int,int>m;
        m[0]++;
        for(int i=0;i<n;i++){
            s+=nums[i];
            while(s<0)
                s+=k;
            if(m[s%k])
                cnt+=m[s%k];
            m[s%k]++;
        }
        return cnt;
    }
};