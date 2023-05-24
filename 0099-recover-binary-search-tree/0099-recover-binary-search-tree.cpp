class Solution {
    private:
    TreeNode* prev;
    TreeNode* first;
    TreeNode* middle;
    TreeNode* last;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
            if(prev!=NULL && root->val<prev->val){
                //this is first violation mark two nodes as first and middle
                if(first==NULL){
                    first=prev;
                    middle=root;
                }
                //second violation
                else
                    last=root;
            }
        //mark this node as prev
        prev=root;
        inorder(root->right);
    }
    
public:
    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first->val,last->val);
        else if(first && middle) swap(first->val,middle->val);
    }
};