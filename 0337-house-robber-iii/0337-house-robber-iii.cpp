class Solution {
public:
    int solve(TreeNode* root,int &l,int &r){
        if(root==NULL){
            return 0;
        }
        int ll=0,lr=0,rr=0,rl=0;
        l=solve(root->left,ll,lr);
        r=solve(root->right,rr,rl);
        return max(root->val+ll+lr+rr+rl,l+r);
    }
    int rob(TreeNode* root) {
        int l,r;
        return solve(root,l,r);
    }
};