class Solution {
public:
    int steps=0;
    int dfs(TreeNode* node){
        //base case
        if(node==NULL) return 0;
        //recursive calls
        int leftRequired=dfs(node->left);
        int rightRequired=dfs(node->right);
        //abs is taken because child can give coins or take coins
        steps+=abs(leftRequired)+abs(rightRequired);
        //curr val of every node
        return (node->val-1)+leftRequired+rightRequired;
    }
    int distributeCoins(TreeNode* root) {
        //dfs call
        dfs(root);
        return steps;
    }
};