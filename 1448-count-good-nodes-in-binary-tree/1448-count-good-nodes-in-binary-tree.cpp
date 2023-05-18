class Solution {
public:
    int count=0;
    int countNodes(TreeNode* root,int prev){
        if(root==NULL)
            return 0;
        if(prev<=root->val){
            count++;
        }
        countNodes(root->left,max(prev,root->val));
        countNodes(root->right,max(prev,root->val));
        return count;
    }
    int goodNodes(TreeNode* root) {
       return countNodes(root,INT_MIN);
    }
};