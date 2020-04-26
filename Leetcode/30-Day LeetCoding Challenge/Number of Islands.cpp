class Solution {
public:
    vector<vector<bool>> vis;
    int n,m;
    const int dx[4] = {1,-1,0,0};
    const int dy[4] = {0,0,1,-1};
    bool inside(int x,int y,vector<vector<char>>& grid){
        return x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grid[x][y] == '1';
    }
    void dfs(int x,int y,vector<vector<char>>& grid){
        vis[x][y] = true;
        for(int d=0;d<4;d++){
            int xx = x + dx[d];
            int yy = y + dy[d];
            if (inside(xx,yy,grid))
                dfs(xx,yy,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=(int)grid.size();
        if (n == 0)
            return 0;
        m=(int)grid[0].size();
        int ans=0;
        vis.resize(n,vector<bool> (m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if (inside(i,j,grid))
                    ans++,dfs(i,j,grid);
        return ans;
    }
};