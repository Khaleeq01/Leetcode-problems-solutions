class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {   
        // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        priority_queue<int> maxHeap;
        int i=0, diff =0; 
        for(i=0; i<heights.size()-1; i++){ 
            diff = heights[i+1]-heights[i];
            if(diff <= 0){
                continue;
            }
            bricks -= diff; 
            maxHeap.push(diff); 
            if(bricks < 0){
                bricks += maxHeap.top(); 
                maxHeap.pop(); 
                ladders--;
            }
            if(ladders < 0) break;
        }
        return i;
    }
};