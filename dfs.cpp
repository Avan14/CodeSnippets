

 void dfs(int x, int y, vector<vector<char>>& grid,
            vector<vector<bool>>& visited) {
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int rows = grid.size();
        int cols = grid[0].size();
        visited[x][y] = true;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols &&
                !visited[nx][ny] && grid[nx][ny] =='1') {
                 dfs(nx, ny, grid, visited);
            }
        }
    }