#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(const vector<int>& arr){
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> prefix = prefixSum(arr);
    int q, a, b;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> a >> b;
        if(a==0){
            int sum = prefix[b] - prefix[a];
            cout << sum << endl;
        }
        else {int sum = prefix[b] - prefix[a-1];
        cout << sum << endl;}

        
    }
    return 0;
}