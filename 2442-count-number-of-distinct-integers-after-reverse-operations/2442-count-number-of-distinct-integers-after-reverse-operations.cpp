class Solution {
public:
int reverse(int n){
    int rno=0;
    while(n!=0){
        int d=n%10;
        rno=rno*10+d;
        n=n/10;
    }
    return rno;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }
};