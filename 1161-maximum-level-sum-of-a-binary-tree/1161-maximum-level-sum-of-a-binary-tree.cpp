class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans=0;
        int level=0;
        int maxSum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            level++;
            int size=q.size();
            int temp=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                temp+=node->val;
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            if(temp>maxSum){
                ans=level;
                maxSum=temp;
            }
        }
        return ans;
    }
};