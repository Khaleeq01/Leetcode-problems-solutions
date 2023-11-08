class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int width=abs(sx-fx);
        int height=abs(sy-fy);
        //edge case if start and finish coordinates are same
        if(height==0 && width==0 && t==1){
            return false;
        }
       return t>=max(height,width);
    }
};