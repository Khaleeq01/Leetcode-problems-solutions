class Solution {
public:
    string answer="~";
    void solve(TreeNode* root,string s){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            answer=min(answer,char(root->val+'a')+s);
        }
        solve(root->left,char(root->val+'a')+s);
        solve(root->right,char(root->val+'a')+s);
    }
    string smallestFromLeaf(TreeNode* root) {
        solve(root,"");
        return answer;
    }
};