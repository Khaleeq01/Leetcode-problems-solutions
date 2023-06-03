class Solution {
public:
    bool compare(vector<int>& selected,string& currString){
         // Before checking with selected[], we need to check if currString has repeating characters or Not

    // This is done using selfCheck vector which checks if currString has repeating characters or Not
        vector<int>selfCheck(26,0);
        for(int i=0;i<currString.size();i++){
             // As all the characters are present in LowerCase, we can use currString[i] - 'a' to map every character to a corresponding index
              // If selfCheck[currString[i] - 'a'] is already taken, it means currString has repeating characters
            if(selfCheck[currString[i]-'a']==1)
                return false;
             // Else we mark all the characters inside SelfCheck as 1
            selfCheck[currString[i]-'a']=1;
        }
            // The second Loop ensures whether the characters of currString has already been selected or not
            for(int i=0;i<currString.size();i++){
                  // If currString[i] - 'a' is already taken, it means we cannot take currString, thus we return false
                 if (selected[currString[i] - 'a'] == 1)
                return false;
            }
        return true;
        }
    int help(int i,vector<string>& arr,vector<int>& selected,int len){
        //base case
        if(i==arr.size()){
            return len;
        }
        string currString=arr[i];
         // If currString contains Duplicate Characters or it's characters have already been taken, we have no option but to skip curr String and move to next Index
        if(compare(selected,currString)==false){
            //skip tht currString
            return help(i+1,arr,selected,len);
        }
          // Else we have two options, One to include CurrString OR another option is to Skip CurrString
        else{
            // If we pick the currString, all it's characters must be marked as taken in selected [] vector
            for(int j=0;j<currString.size();j++){
                selected[currString[j]-'a']=1;
            }
                //increase the len of string
                len+=currString.size();
                //call recursion for next task
                int op1=help(i+1,arr,selected,len);
                // Backtrack and unmark all the characters of currString as NOT TAKEN in selected[] vector
                for(int j=0;j<currString.size();j++){
                selected[currString[j]-'a']=0;
            }
            //decrease len
            len-=currString.size();
            //call recursion for next task
                int op2=help(i+1,arr,selected,len);
            return max(op1,op2);
            }
        }
    
    int maxLength(vector<string>& arr) {
          // selected [] vector will keep track of all the characters which have been taken yet
        vector<int>selected(26,0);
        return help(0,arr,selected,0);
    }
};