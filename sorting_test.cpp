#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {45, 12, 89, 5, 23};
    // Ascending order
    sort(arr.begin(), arr.end());

    cout << "Ascending order: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // Descending order
    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Descending order: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;

}