class Solution {
public:
     vector<TreeNode*>sortedArr;
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return sortedArrayToBST(0,sortedArr.size()-1);
    }
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        sortedArr.push_back(root);
        inorder(root->right);
    }
    TreeNode* sortedArrayToBST(int start,int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* root=sortedArr[mid];
        root->left=sortedArrayToBST(start,mid-1);
        root->right=sortedArrayToBST(mid+1,end);
        return root;
    }
};