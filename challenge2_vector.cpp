#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverseVector(vector<int>& arr){
    int left = 0;
    int right = arr.size() - 1;

    while(arr[left] < arr[right]){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    reverseVector(arr);

    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}