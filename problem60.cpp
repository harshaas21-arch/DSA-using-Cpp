#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int shortestPathBinaryMatrix(vector<vector<int>>& grid){
    int m = grid.size();
    int n = grid[0].size();
    if(grid[0][0] == 1 || grid[m-1][n-1] == 1) return -1;
    queue<pair<int, int>> q;
    q.push({0,0});
    grid[0][0] = 1;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    int pathLength = 1;
    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            pair<int, int> curr = q.front();
            q.pop();
            int r = curr.first;
            int c = curr.second;
            if(r == m-1 && c == n-1) return pathLength;
            for(int i=0; i<4; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 0){
                    q.push({nr, nc});
                    grid[nr][nc] = 1;
                }
            }
        }
        pathLength++;
    }
    return -1;
}
int main(){
    vector<vector<int>> grid1 = {
        {0, 0, 0},
        {1, 1, 0},
        {0, 0, 0}
    };
    cout << "Grid 1 Shortest path: " << shortestPathBinaryMatrix(grid1) << endl;
    vector<vector<int>> grid2 = {
        {0, 1},
        {1, 0}
    };
    cout << "Grid 2 Shortest Path: " << shortestPathBinaryMatrix(grid2) << endl; // Output: -1

    return 0;

}