class Solution {
public:
    void helper(TreeNode* root, string &str){
        if(root==NULL){
            return;
        }
        str+=to_string(root->val);
        if(root->left || root->right){
            str+='(';
            helper(root->left,str);
            str+=')';
        }
        if(root->right){
            str+='(';
            helper(root->right,str);
            str+=')';
        }
    }
    string tree2str(TreeNode* root) {
        string str="";
        helper(root,str);
        return str;
    }
};