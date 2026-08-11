#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } if (n == 0) { 
        cout << 0; 
        return 0; 
    } 
    sort(arr.begin(), arr.end()); 
    int current = 1; 
    int best = 1; 
    for (int i = 1; i < n; i++) {  
        if (arr[i] == arr[i - 1]) { 
            continue; 
        } 
        if (arr[i] == arr[i - 1] + 1) { 
            current++; 
        }  else { 
            current = 1; 
        } best = max(best, current); 
    } 
    cout << best; 
    return 0; 
}