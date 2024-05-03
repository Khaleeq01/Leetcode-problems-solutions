class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0,m=version1.size(),n=version2.size(),n1,n2;
        while(i<m || j<n){
            n1=0;
            n2=0;
            while(i<m && version1[i]!='.'){
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            while(j<n && version2[j]!='.'){
                n2=n2*10+(version2[j]-'0');
                j++;
            }
            if(n1<n2) return-1;
            else if(n1>n2) return 1;
            i++;// our pointer is at . and we want to go next revision
            j++;// our pointer is at . and we want to go next revision
        }
        return 0;
    }
};