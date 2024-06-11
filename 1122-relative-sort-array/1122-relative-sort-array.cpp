class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //make arr of max_element size
        int maxEl=*max_element(arr1.begin(),arr1.end());
        vector<int>freq(maxEl+1,0);
        //iterate on arr1 to store freq of element
        for(auto el:arr1) freq[el]++;
        
        //take ans to store answer
        vector<int>ans;
        //iterate on arr2 
        for(auto el:arr2){
            while(freq[el]--){
                ans.push_back(el);
            }
        }
        // iterate on freq arr for remainng elements
        for(int el=0;el<=maxEl;el++){
            int f=freq[el];
            while(f>0 && f--){
                ans.push_back(el);
            }
        }
        return ans;
    }
};