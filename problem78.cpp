#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    int k;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> k;
    k%=n;
    rotate(arr.rbegin(), arr.rbegin()+k, arr.rend());
    for(int i: arr){
        cout << i << " " ;
    }
    return 0;
}