#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxWindow(const vector<int>& arr, int k){
    vector<int> result;
    int n = arr.size();
    deque<int> dq;
    for(int i=0; i<n; ++i){
        if(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            result.push_back(arr[dq.front()]);
        }
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector<int> result = maxWindow(arr, k);
    for(int i : result){
        cout << i << " ";
    }
    return 0;

}
