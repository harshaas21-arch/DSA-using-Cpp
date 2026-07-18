#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        
        arr[i].resize(k);
        
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    for (int m = 0; m < q; m++) {
        int i, j;
        cin >> i >> j;
        
        // Print the element at index j inside the array located at arr[i]
        cout << arr[i][j] << "\n";
    }

    return 0;
}
