class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        int i=1;
        int count=0;
        long sum=0;
        while(count<n){
            if(i<=target/2 || i>=target){
                count++;
                sum+=i;
            }
            i++;
        }
        return sum;
    }
};