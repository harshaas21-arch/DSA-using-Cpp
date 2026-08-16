#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> result;
    unordered_set<int> seen;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> frequency;
    for(int i : arr){
        frequency[i]++;
    }
    for(int i : arr){
        if(seen.find(i) == seen.end()){
            seen.insert(i);
            result.push_back(i);
        }
    }
    for(auto i : result){
        cout << i << " " << frequency[i] << endl;
    }
    return 0;
}