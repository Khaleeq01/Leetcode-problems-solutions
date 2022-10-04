class Solution
{
private:
    void bfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid, int delta_row[], int delta_col[])
    {
        int n = grid.size();
        int m = grid[0].size();

        visited[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            
            for (int i = 0; i < 4; i++)
            {
                int neighbour_row = r + delta_row[i];
                int neighbour_col = c + delta_col[i];

                // for each neighbour check boundary
                if (neighbour_row >= 0 && neighbour_row < n && neighbour_col >= 0 && neighbour_col < m)
                {
                    // check for land and prev visited
                    if (grid[neighbour_row][neighbour_col] == '1' && !visited[neighbour_row][neighbour_col])
                    {
                        visited[neighbour_row][neighbour_col] = 1;
                        q.push({neighbour_row, neighbour_col});
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int ans = 0;
        int delta_row[] = {-1, 0, 1, 0};
        int delta_col[] = {0, 1, 0, -1};

        for (int row = 0; row < n; row++)
            for (int col = 0; col < m; col++)
                if (!visited[row][col] && grid[row][col] == '1')
                {
                    ++ans;
                    bfs(row, col, visited, grid, delta_row, delta_col);
                }

        return ans;
    }
};