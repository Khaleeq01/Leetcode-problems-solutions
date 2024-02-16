class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(auto el:arr) freq[el]++;
        
        vector<int>freqVector;
        for(auto i:freq) freqVector.push_back(i.second);
        
        sort(freqVector.begin(),freqVector.end());
        
        int elementsRemoved=0;
        for(int i=0;i<freqVector.size();i++){
            elementsRemoved+=freqVector[i];
            if(elementsRemoved>k) 
                return freqVector.size()-i;
        }
        return 0;
    }
};