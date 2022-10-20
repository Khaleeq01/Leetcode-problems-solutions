class Solution {
public:
    bool isCycle(vector<vector<int>> &graph,vector<int> &color,int i){
       color[i] = 1;
        
        for (auto neighbor : graph[i]) {
            if(color[neighbor] == 1) return true;
            if(color[neighbor] == 0) {
                if (isCycle(graph,color,neighbor)) return true;
            }
        }
        
        color[i] = 2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>color(numCourses,0);
        vector<vector<int>>graph(numCourses);
        //build a graph
        for(auto it:prerequisites){
            graph[it[1]].push_back(it[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!color[i]){
                if(isCycle(graph,color,i))
                    return false;
            }
        }
        return true;
    }
};