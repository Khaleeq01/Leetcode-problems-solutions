class Solution {
public:
    int maxDepth=-1;
    int ans=-1;
    void dfs(TreeNode* node,int depth){
        if(node==NULL) return;
        if(depth>maxDepth){
           maxDepth=depth;
            ans=node->val;
        }
        dfs(node->left,depth+1);
        dfs(node->right,depth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};