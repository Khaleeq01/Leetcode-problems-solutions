/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minSwaps(vector<int> &a){
        int n=a.size();
        vector<pair<int,int>>Pos(n);
        for(int i=0;i<n;i++){
            Pos[i].first=a[i];
            Pos[i].second=i;
        }
        sort(Pos.begin(),Pos.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(Pos[i].second==i)
                continue;
            while(Pos[i].second!=i){
                ans++;
            swap(Pos[i],Pos[Pos[i].second]);
            }
        }
        return ans;
    }
    int minimumOperations(TreeNode* root) {
        int ans=0;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int t=q.size();
            vector<int>v;
            while(t--){
            TreeNode* node=q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
                v.push_back(node->left->val);
            }
            if(node->right!=NULL){
                q.push(node->right);
                v.push_back(node->right->val);
            }
            }
            ans+=(minSwaps(v));
        }
        return ans;
    }
};