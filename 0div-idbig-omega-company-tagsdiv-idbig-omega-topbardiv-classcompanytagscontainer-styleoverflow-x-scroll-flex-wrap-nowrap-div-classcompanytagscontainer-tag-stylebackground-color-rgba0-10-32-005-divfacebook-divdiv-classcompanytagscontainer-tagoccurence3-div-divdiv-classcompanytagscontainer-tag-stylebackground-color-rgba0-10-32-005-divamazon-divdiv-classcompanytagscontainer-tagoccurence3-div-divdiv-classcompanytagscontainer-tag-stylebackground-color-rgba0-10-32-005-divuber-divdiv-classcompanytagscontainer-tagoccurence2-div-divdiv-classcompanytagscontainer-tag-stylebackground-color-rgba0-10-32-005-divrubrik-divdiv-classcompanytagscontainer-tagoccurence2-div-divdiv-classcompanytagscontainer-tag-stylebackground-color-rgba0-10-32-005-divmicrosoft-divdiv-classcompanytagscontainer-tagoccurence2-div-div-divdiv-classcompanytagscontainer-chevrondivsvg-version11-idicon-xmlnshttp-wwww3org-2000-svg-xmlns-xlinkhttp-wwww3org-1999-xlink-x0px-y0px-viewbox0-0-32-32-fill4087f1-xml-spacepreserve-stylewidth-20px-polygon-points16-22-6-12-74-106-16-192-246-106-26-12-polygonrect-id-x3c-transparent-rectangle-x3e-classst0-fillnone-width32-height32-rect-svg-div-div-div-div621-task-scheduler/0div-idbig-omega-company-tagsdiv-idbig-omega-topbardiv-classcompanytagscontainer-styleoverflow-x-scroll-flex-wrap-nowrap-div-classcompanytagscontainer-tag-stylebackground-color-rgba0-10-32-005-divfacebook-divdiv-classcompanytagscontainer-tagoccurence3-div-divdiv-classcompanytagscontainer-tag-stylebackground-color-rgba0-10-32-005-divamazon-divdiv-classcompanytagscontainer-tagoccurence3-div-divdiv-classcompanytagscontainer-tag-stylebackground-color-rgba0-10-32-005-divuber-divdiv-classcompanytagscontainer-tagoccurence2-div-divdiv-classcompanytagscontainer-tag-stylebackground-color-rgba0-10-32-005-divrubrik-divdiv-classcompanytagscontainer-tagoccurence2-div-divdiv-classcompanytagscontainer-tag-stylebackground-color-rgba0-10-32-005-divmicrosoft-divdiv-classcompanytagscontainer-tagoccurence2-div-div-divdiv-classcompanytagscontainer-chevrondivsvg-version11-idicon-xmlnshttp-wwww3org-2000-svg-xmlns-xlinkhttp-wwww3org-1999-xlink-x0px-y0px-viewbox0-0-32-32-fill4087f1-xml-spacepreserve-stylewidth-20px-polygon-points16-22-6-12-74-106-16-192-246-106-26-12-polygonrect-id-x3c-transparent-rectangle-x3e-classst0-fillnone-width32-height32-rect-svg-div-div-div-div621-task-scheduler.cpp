class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
        }
        //sort on the basis of decreasing order of freq
        sort(freq.begin(),freq.end(),greater<int>());
        int idle=(freq[0]-1)*n;
        for(int i=1;i<26;i++){
            idle-=min(freq[0]-1,freq[i]);
        }
        //calculate max(0,idle) if idle have been consume
        return tasks.size()+max(0,idle);
    }
};