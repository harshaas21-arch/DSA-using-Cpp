#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>& arr, int target){
  int left = 0;
  int right = arr.size()-1;

  while(left<=right){
    int mid = left + (right-left)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        left = mid+1;
    }
    else{
        right = mid-1;
    }
  }
  return -1;
}
int main(){
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int target = 40;

    int result = binarySearch(arr, target);

    if(result!= -1){
        cout << "Target at index : " << result << endl;
    } else{
        cout << "Target not found" << endl;
    }
return 0;
}