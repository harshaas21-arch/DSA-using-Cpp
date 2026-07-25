#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotateVector(vector<int>& nums, int k){
    k = k % nums.size();
    if(k==nums.size() || k==0){
        return nums;
    }
    else{
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    return nums;
}
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 5;
    vector<int> result = rotateVector(nums, k);
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}