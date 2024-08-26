class Solution {
public:
    void help(Node* root,vector<int>& ans){
        if(root==NULL) return;
      for(Node* childNode:root->children){
          help(childNode,ans);
      }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        help(root,ans);
        return ans;
    }
};