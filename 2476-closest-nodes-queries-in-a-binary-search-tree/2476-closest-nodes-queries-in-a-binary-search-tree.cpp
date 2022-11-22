class Solution {
public:
    vector<int>ans;
    void inorder(TreeNode*root){
        if(root){
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
       inorder(root);
        int n=ans.size();
        vector<vector<int>>v;
        for(int q:queries){
            int l=0,h=n-1;
            int lb=INT_MIN,ub=INT_MAX;
            while(l<=h){
                int mid=(l+h)/2;
                if(ans[mid]==q){
                    lb=q,ub=q;
                    break;
                }
                else if(ans[mid]<q){
                    lb=max(lb,ans[mid]);
                    l=mid+1;
                }
                else{
                    ub=min(ub,ans[mid]);
                    h=mid-1;
                }
            }
            if(lb==INT_MIN)
                lb=-1;
            if(ub==INT_MAX)
                ub=-1;
            v.push_back({lb,ub});
        }
        return v;
    }
};