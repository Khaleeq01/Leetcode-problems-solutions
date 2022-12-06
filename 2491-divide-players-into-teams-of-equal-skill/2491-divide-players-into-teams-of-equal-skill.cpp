class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long left=0,right=skill.size()-1,prod=1,sum=0;
        long long valid=skill[0]+skill[skill.size()-1];
        while(left<right){
            if(skill[left]+skill[right]==valid){
                prod=skill[left++]*skill[right--];
                sum+=prod;
            }
            else{
                return -1;
            }
        }
        return sum;
    }
};