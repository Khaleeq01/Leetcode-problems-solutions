class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        long long mod=1e9+7;
        vector<int>bits(32,0);
        //counting bits
        for(int i=0;i<32;i++){
            for(int num:nums){
                if(num&(1<<i)){
                    bits[i]++; 
                }
            }
        }
        long long ans=0;
        while(k--){
            long long curr=0;
            for(int i=0;i<32;i++){
                if(bits[i]){
                    curr= curr | (1<<i);
                    bits[i]--;
                }
            }
            ans+=(curr*curr);
            ans%=mod;
        }
        return ans;
    }
};

// 2 , 6 , 5 , 8
//10, 110, 101, 1000
// set bit array  = vector<int>cnt(32,0)

// for 2-> 10 & 1 = 0  cnt[0] =0
//         10 & 10 = 1  cnt[1] =1 

// for 6-> 110 & 1 = 0   cnt[0]=0
//         110 & 10 = 1  cnt[1] =1
//         110 & 110 = 1  cnt[2]= 1

// for 5-> 101 & 1 = 1   cnt[0] = 1
//         101 & 10 = 0  cnt[1] =0
//         101 & 100 = 1  cnt[2] = 1

//  for 8 -> 1000 & 1 = 0  cnt[0] =0
//           1000 & 10 = 0  cnt[1] =0
//           1000 & 100 = 0  cnt[2] =0 
//           1000 & 1000 = 1  cnt[3] =1

// so overall cnt array of set bits become 
// 0 , 1, 2, 3, 4, 5, 6, 7, 8, ...... 31 ->indexes
// 1 , 2, 2, 1 , 0 , 0 , 0 ....... 0  -> cnt of set bits

// ans =0 
//  loop on the set bit array = { 1, 2, 2, 1}
//  if set bit so OR with curr number 

// curr = 0 
// k =1
//  1<<i i=0  cur | 1 =>   0 | 1 = 1  , cnt[0] = 0
//  1<<i i=1  cur | 10 =>  1 | 10 = 11  cnt[1] = 1
//  1<<i i=2  cur | 110 => 11 | 100 = 111  cnt[2]=1 
//  1<<i i=3  cur | 1110 => 111 | 1000 = 1111  cnt[3] = 0 
// now cur is 1111 = 15 , ans += 15*15 = 225
//  ans += 225 

// set bit array = { 0, 1, 1, 0}
// cur=0
// k= 2
// i=0  not a set bit at cnt[0]
// i=1  cur | 10 = 0 | 10 = 10  cnt[1]=0
// i=2  cur | 100 = 10 | 100 = 110  cnt[2]=0
// i=3  not a set bit  
// so cur = 110 = 6 
// ans += 6*6 
// ans = 225 + 36 = 261 