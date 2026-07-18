#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    // Create a vector of vectors containing 'n' empty inner vectors
    vector<vector<int>> arr(n);

    // 1. Populate the variable-sized arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        
        // Resize the current inner vector to hold exactly 'k' elements
        arr[i].resize(k);
        
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // 2. Process each of the 'q' queries
    for (int m = 0; m < q; m++) {
        int i, j;
        cin >> i >> j;
        
        // Print the element at index j inside the array located at arr[i]
        cout << arr[i][j] << "\n";
    }

    return 0;
}
