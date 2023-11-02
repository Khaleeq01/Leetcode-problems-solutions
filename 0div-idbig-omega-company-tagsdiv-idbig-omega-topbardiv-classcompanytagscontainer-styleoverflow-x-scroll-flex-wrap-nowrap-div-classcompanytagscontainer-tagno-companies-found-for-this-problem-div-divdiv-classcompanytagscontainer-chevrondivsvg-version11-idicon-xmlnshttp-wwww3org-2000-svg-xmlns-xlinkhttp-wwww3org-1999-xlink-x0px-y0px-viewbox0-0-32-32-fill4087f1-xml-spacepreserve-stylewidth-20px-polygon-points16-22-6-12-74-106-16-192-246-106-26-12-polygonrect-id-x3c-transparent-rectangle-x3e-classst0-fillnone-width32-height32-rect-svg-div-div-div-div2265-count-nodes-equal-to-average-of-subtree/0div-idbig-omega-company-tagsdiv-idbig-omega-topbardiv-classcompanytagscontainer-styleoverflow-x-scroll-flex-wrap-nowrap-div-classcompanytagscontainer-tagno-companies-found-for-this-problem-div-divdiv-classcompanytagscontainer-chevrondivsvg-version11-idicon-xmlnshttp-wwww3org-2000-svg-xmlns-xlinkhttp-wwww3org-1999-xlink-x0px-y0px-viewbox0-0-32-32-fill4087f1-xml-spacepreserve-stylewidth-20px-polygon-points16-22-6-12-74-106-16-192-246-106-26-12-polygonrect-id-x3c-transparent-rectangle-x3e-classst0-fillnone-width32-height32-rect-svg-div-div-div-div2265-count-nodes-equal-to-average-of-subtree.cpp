class Solution {
public:
    int ans=0;
    // to store sum and count
    pair<int,int>helper(TreeNode* root){
         if(root==NULL) return{0,0};
        pair<int,int>leftPair=helper(root->left);
        pair<int,int>rightPair=helper(root->right);
        int sum=root->val+leftPair.first+rightPair.first;
        int count=1+leftPair.second+rightPair.second;
        int avg=sum/count;
        if(root->val==avg) ans++;
       return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        helper(root);
        return ans;
    }
};