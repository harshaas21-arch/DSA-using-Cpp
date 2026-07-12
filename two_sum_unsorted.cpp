#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSumUnsorted(const vector<int>&arr, int target){
    unordered_map<int, int> seenNumbers;

    for(int i=0; i<arr.size(); i++){
        int currentNum = arr[i];
        int complement = target - currentNum;

        if(seenNumbers.find(complement) != seenNumbers.end()){
            return {seenNumbers[complement], i};
        }
        else{
            seenNumbers[currentNum] = i;
        }
        
    }
    return {};
}

int main(){
    vector<int> arr = {7, 15, 2, 11};
    int target =13;

    vector<int> indices = twoSumUnsorted(arr, target);
    if(!indices.empty()){
        cout << "Indices: " << indices[0] << " " << indices[1] ;
    }
    else{
        cout <<"Not found" ;
    }
    return 0;
}