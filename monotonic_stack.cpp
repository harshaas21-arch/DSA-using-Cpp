#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(const vector<int>& arr){
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> s;

    for(int i=n-1; i>=0; i--){
        while(!s.empty() && s.top()<= arr[i]){
            s.pop();
        }
        if(!s.empty()){
            result[i] = s.top();
        }
        s.push(arr[i]);
    }
    return result;
}
int main(){
    vector<int> arr = {4,5,2,25};
    vector<int> ans = nextGreaterElement(arr);

    for(int x : ans){
        cout << x << " " << endl;
    }
    return 0;
}