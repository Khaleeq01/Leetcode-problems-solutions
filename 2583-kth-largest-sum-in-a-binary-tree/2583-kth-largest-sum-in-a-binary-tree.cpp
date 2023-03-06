class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
      queue<TreeNode*>q;
        q.push(root);
        long long sum;
        vector<long long>level_sum;
        while(!q.empty()){
            int sz=q.size();
            sum=0;
            for(int i=0;i<sz;i++){
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            level_sum.push_back(sum);
        }
        int n=level_sum.size();
        if(n<k)
            return -1;
        sort(level_sum.begin(),level_sum.end());
        return level_sum[n-k];
    }
};