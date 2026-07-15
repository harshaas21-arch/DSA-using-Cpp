#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void bfsTraversal(int startNode, const vector<vector<int>>& adj, int V){
    vector<bool> visited(V, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Traversal order: ";

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for(int neighbor : adj[curr]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}
int main(){
    int V = 4; // 4 nodes
    vector<vector<int>> adj(V);
// Building a simple square graph:
    //  0 --- 1
    //  |     |
    //  2 --- 3
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3};
    adj[3] = {1, 2};

    bfsTraversal(0, adj, V);
    return 0;
}