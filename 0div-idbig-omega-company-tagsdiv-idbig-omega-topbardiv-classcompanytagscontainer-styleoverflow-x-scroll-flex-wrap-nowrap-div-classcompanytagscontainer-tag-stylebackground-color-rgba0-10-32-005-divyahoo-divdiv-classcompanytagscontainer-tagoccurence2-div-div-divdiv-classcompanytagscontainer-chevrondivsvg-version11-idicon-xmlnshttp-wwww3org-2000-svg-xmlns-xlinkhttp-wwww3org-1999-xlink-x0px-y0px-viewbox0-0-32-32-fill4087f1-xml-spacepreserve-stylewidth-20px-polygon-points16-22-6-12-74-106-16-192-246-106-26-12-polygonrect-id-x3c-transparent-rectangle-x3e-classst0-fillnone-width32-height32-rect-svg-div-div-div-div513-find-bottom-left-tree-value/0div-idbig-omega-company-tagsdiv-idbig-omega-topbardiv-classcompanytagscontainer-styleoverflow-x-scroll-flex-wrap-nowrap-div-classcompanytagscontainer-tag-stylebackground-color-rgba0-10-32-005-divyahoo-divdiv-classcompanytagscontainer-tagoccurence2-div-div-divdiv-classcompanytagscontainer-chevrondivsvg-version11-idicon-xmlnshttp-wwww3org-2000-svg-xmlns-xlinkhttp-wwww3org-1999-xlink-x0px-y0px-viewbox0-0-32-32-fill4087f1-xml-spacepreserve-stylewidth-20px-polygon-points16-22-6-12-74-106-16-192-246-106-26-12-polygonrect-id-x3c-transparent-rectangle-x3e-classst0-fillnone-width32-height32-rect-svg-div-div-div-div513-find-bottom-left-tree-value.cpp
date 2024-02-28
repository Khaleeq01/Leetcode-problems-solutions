class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int ans=0,level=-1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           auto node=q.front();
            q.pop();
            if(node==NULL)continue;
            ans=node->val;
            q.push(node->right);
            q.push(node->left);
        }
        return ans;
    }
};