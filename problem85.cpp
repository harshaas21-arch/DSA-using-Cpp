#include<iostream>
#include<vector>
using namespace std;

int maxSum(const vector<int>& arr, int k){
 int n = arr.size();
 if(n <= k){
    cout << "Invalid";
 }
 int max_Sum = 0;
 for(int i=0; i<k; i++){
    max_Sum += arr[i];
 }
 int currentSum = max_Sum;
 for(int i=k; i<n; i++){
    currentSum += arr[i] - arr[i-k];
    max_Sum = max(max_Sum, currentSum); 
 }
 return max_Sum;

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
    int result = maxSum(arr, k);
    cout << result;

    return 0;
}