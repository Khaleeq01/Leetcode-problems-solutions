class Solution {
public:
    int maxDiff(TreeNode* node,int maxVal,int minVal){
        if(node==NULL)
            return maxVal-minVal;
        maxVal=max(maxVal,node->val);
        minVal=min(minVal,node->val);
        int maxLeftDiff=maxDiff(node->left,maxVal,minVal);
        int maxRightDiff=maxDiff(node->right,maxVal,minVal);
        return max(maxLeftDiff,maxRightDiff);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        return maxDiff(root,root->val,root->val);
    }
};