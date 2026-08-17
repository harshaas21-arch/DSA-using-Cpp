#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    long long count = 0;
    unordered_map<int, int> freq;
    for(int i : arr){
        int sum = k - i;
        if(freq.find(sum) != freq.end()){
            count += freq[sum];
        }
        freq[i]++;
    }
    cout << count;
    return 0;
}