class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Step 1: Create a vector of pairs to store heights and corresponding names.
        vector<pair<int, string>> a;
        int n = names.size();

        // Step 2: Populate the vector 'a' with pairs of heights and names.
        for (int i = 0; i < n; i++) {
            a.push_back({heights[i], names[i]});
        }

        // Step 3: Sort the vector 'a' in descending order based on heights.
        sort(a.rbegin(), a.rend());

        // Step 4: Update the 'names' vector with the sorted names based on heights.
        for (int i = 0; i < n; i++) {
            names[i] = a[i].second;
        }

        // Step 5: Return the sorted names.
        return names;
    }
};
