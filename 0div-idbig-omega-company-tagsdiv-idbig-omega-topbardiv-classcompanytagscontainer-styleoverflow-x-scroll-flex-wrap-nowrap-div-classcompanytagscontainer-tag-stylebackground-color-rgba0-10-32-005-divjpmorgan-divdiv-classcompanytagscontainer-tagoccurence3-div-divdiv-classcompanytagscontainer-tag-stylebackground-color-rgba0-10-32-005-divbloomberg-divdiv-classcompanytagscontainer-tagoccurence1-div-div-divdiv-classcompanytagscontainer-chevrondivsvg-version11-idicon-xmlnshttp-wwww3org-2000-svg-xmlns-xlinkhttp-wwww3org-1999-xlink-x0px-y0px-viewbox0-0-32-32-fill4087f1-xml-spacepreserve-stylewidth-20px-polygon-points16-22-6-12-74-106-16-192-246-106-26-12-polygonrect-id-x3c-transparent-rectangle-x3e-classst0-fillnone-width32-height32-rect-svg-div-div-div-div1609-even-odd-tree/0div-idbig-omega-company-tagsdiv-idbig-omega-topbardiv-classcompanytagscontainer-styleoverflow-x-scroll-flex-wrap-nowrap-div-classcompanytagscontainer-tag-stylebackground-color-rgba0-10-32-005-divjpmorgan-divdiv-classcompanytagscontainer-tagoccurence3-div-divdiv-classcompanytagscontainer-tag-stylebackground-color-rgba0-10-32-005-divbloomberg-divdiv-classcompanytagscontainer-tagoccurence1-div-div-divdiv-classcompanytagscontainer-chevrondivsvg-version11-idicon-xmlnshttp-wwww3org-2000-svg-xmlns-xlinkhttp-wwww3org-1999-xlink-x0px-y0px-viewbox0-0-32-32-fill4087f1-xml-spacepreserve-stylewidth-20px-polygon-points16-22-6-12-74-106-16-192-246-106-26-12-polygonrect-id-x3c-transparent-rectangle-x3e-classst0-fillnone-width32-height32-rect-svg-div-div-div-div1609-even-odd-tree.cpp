class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode* currNode=root;
        q.push(currNode);
        bool isEven=true;
        while(!q.empty()){
            int size=q.size();
            int prev=INT_MAX;
            if(isEven) prev=INT_MIN;
            while(size--){
            currNode=q.front();
                q.pop();
                if(isEven && (currNode->val%2==0 || currNode->val<=prev)) return false;
                if(!isEven &&(currNode->val%2==1 || currNode->val>=prev)) return false;
                prev=currNode->val;
                if(currNode->left) q.push(currNode->left);
                if(currNode->right) q.push(currNode->right);
            }
             isEven=!isEven;
        }
        return true;
    }
};