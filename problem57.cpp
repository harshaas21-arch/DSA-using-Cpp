#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> searchRange(const vector<int>& nums, int target){
 auto range = equal_range(nums.begin(), nums.end(), target);
 if(range.first == nums.end() || *range.first != target){
    return{-1, -1};
 }
 int startIdx = distance(nums.begin(), range.first);
 int endIdx = distance(nums.begin(), range.second) - 1;
 return {startIdx, endIdx};
}

int main() {
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    vector<int> res1 = searchRange(nums1, target1);
    cout << "Target " << target1 << ": [" << res1[0] << ", " << res1[1] << "]" << endl;

    int target2 = 6;
    vector<int> res2 = searchRange(nums1, target2);
    cout << "Target " << target2 << ": [" << res2[0] << ", " << res2[1] << "]" << endl;

    return 0;
}