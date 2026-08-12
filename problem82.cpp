#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    stack<int> nums;
    vector<int> ans(n);
    nums.push(arr[n-1]);
    for (int i = n-1; i >= 0; i--) { 
        while (!nums.empty() && nums.top() <= arr[i]) { 
            nums.pop(); 
        } 
        if (nums.empty()) 
            ans[i] = -1; 
        else 
            ans[i] = nums.top(); 
        
        nums.push(arr[i]); }
    for(int i : ans){
        cout << i << " ";
    }
    return 0;
}