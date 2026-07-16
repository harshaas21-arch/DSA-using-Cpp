#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubarraysum(const vector<int>& arr, int k){
    int n = arr.size();
    if(n<k) return 0;

    int windowSum = 0;

    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
    int maxSum = windowSum;

    for(int i=k; i<n; i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 6};
    int k=3;

    cout <<"Maximum sum of a subarray of size " << k << " is: " << maxSubarraysum(arr, k) << "\n";

    return 0;
}