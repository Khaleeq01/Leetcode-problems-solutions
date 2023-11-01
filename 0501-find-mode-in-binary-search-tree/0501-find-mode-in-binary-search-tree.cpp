
class Solution {
public:
    unordered_map<int,int>map;
    void isValid(TreeNode* root){
        if(root==NULL) return;
        isValid(root->left);
        map[root->val]++;
        isValid(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        isValid(root);
        int maxi=0;
        for(auto it:map){
            if(it.second>maxi)
                maxi=it.second;
        }
        vector<int>ans;
        for(auto it:map){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};