class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        //base case
        if(root==NULL) return true;
        // recursive call
       bool leftResult= evaluateTree(root->left);
       bool rightResult=evaluateTree(root->right);
        //handling non leaf node case
        if(root->val==2) 
         return leftResult || rightResult;
        if(root->val==3)
            return leftResult && rightResult;
        //handling leaf node case
        return(root->val==0)?false:true;
    }
};