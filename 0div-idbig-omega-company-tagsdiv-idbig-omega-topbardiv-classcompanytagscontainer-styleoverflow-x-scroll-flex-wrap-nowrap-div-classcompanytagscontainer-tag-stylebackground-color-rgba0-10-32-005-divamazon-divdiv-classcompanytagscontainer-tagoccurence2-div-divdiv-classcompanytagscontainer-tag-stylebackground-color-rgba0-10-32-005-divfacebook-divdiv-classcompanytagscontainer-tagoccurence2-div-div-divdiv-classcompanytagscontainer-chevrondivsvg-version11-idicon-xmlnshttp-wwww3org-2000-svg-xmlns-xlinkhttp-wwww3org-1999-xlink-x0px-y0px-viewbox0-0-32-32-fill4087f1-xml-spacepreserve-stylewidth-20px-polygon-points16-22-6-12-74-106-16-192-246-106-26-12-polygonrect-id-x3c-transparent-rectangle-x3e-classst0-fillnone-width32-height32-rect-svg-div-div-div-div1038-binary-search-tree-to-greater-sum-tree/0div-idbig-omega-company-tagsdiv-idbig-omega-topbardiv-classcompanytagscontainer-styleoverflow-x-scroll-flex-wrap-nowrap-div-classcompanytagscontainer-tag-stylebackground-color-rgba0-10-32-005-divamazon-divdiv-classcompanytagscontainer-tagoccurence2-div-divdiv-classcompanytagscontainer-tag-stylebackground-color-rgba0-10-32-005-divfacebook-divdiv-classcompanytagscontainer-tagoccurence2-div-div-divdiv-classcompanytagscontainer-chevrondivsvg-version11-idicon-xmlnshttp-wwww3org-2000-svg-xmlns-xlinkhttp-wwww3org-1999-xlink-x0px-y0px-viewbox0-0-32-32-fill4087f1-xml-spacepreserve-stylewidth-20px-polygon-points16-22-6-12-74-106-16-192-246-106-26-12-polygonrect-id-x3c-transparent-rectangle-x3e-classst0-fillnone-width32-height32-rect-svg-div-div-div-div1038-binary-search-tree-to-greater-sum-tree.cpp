class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int nodeSum=0;
        helper(root,nodeSum);
        return root;
    }
    void helper(TreeNode* root, int& nodeSum){
        //base case
        if(root==NULL) return;
        // right recursion call
        helper(root->right,nodeSum);
        nodeSum+=root->val;
        //update the value of root
        root->val=nodeSum;
        //left recursion call
        helper(root->left,nodeSum);
    }
};