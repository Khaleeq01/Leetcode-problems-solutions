class Solution {
public:
   vector<TreeNode*>ans;
    void dfs(TreeNode* root,unordered_set<int>& s, bool is_root){
      if(root==NULL) return;
        if(s.find(root->val)!=s.end()){
            dfs(root->left,s,true);
            dfs(root->right,s,true);
        }
        else{
            if(is_root) ans.push_back(root);
            TreeNode* leftNode=root->left;
            TreeNode* rightNode=root->right;
            if(root->left){
                if(s.find(root->left->val)!=s.end())
                    root->left=NULL;
            }
            if(root->right){
                if(s.find(root->right->val)!=s.end())
                    root->right=NULL;
            }
            dfs(leftNode,s,false);
            dfs(rightNode,s,false);
        }
        
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
         unordered_set<int> s(to_delete.begin(), to_delete.end());
        dfs(root,s,true);
        return ans;
    }
};