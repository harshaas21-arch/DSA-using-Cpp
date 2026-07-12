#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSumSorted(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        int currentSum = arr[left] + arr[right];

        if(currentSum == target){
            return {left, right};
        }
        else if(currentSum < target){
            left++;
        }
        else if(currentSum > target){
            right--;
        }
    }
    return {};
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 18;

    vector<int> indices = twoSumSorted(arr, target);

    if(!indices.empty()){
        cout << "Indices: " << indices[0] << " " << indices[1] ;
    }
    else{
        cout << "No pair found" ;
    }
    return 0;
}