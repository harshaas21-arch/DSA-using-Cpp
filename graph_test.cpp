#include<iostream>
#include<vector>
using namespace std;

int main(){
    int V = 3;
    vector<vector<int>> adj(V);

    // Connecting 0<->1
    adj[0].push_back(1);
    adj[1].push_back(0);

    // Connecting 1 <-> 2
    adj[1].push_back(2);
    adj[2].push_back(1);

    // Print connections for Node 1
    for(int neighbor : adj[1]){
        cout << neighbor << " ";
    }
    cout << endl;

    return 0;
}