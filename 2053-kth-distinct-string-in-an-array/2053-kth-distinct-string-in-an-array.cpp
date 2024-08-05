class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
         vector<string> distinctStrings;
    
    // Brute force approach to find distinct strings
    for (int i = 0; i < arr.size(); ++i) {
        bool isDistinct = true;
        for (int j = 0; j < arr.size(); ++j) {
            if (i != j && arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            distinctStrings.push_back(arr[i]);
        }
    }

    // Return the kth distinct string if it exists, otherwise return an empty string
    if (k <= distinctStrings.size()) {
        return distinctStrings[k - 1];
    } 
        return "";
    }
};