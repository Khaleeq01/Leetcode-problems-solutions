class Solution {
public:
    void solve(TreeNode* root,vector<int>& n, int &count){
        if(root==NULL) return;
        n[root->val]++;
        solve(root->left,n,count);
        solve(root->right,n,count);
        if(root->left==NULL && root->right==NULL){
            int flag=0;
            for(int i=1;i<=9;i++){
                if(n[i]%2!=0) flag++;
            }
            if(flag==1 || flag==0) count++;
        }
        n[root->val]--; //backtracking decrease frequency
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;// to store count of odd occurence
        vector<int>n(10,0); //to store freq of root value
        solve(root,n,count);
        return count;
    }
};