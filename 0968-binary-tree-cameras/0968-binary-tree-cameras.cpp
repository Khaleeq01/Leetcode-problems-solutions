class Solution {
public:
    int minCameraCover(TreeNode* root) {
        int sum=0;
        if(dfs(root,sum)==0)//if root is not monitored we placed additional camera here
            sum++;
        return sum;
    }
    int dfs(TreeNode* node,int& sum){
        if(node==NULL) return 1;
        int left=dfs(node->left,sum);
        int right=dfs(node->right,sum);
        if(left==0 || right==0){ //if one child is not monitored we need to place camera at current node
            sum++;
            return 2;
        }
        else if(left==2 || right==2){ //if one child has camera the current node is monitored. No need to place camera
            return 1;
        }
        else{ //both children are monitored but have no camera. we place camera at parent node or higher level
            return 0;
        }
        return -1;
    }
};