#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> result;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count++;
        }
        else{
            result.push_back(arr[i]);
        }
    }
    for(int i=0; i<count; i++){
        result.push_back(0);
    }
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}