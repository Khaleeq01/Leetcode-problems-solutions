class DisjointSet {
    vector<int> rank, parent, size; 
public: 
    DisjointSet(int n) {
        rank.resize(n+1, 0); 
        parent.resize(n+1);
        size.resize(n+1); 
        for(int i = 0;i<=n;i++) {
            parent[i] = i; 
            size[i] = 1; 
        }
    }

    int findUPar(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
        }
    }
}; 
class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
      DisjointSet alice(n);
        DisjointSet bob(n);
        
        int removedEdges=0;
        int aliceEdges=0;
        int bobEdges=0;
        
        for(int i=0;i<edges.size();i++){
            //if the path is for both, we will take it first (we are asked to take the minumum no of paths)
            if(edges[i][0]==3){
                // if they are already connected, we ignore the path. So removerEdges++
               if(alice.findUPar(edges[i][1])==alice.findUPar(edges[i][2])) {
                   removedEdges++;
               }
                else{
                    //they are not connected connect them
                    alice.unionByRank(edges[i][1],edges[i][2]);
                    bob.unionByRank(edges[i][1],edges[i][2]);
                    aliceEdges++;
                    bobEdges++;
                }
            }
        }
        
        for(int i=0;i<edges.size();i++){
            if(edges[i][0]!=3){
                if(edges[i][0]==2){
                    if(bob.findUPar(edges[i][1])==bob.findUPar(edges[i][2])){
                        removedEdges++;
                    }
                    else{
                        bob.unionByRank(edges[i][1],edges[i][2]);
                        bobEdges++;
                    }
                }
                else if(edges[i][0]==1){
                    if(alice.findUPar(edges[i][1])==alice.findUPar(edges[i][2])){
                        removedEdges++;
                    }
                    else{
                        alice.unionByRank(edges[i][1],edges[i][2]);
                        aliceEdges++;
                    }
                }
            }
        }
        
        if(aliceEdges==n-1 && bobEdges==n-1)
            return removedEdges;
        return -1;
    }
};