#include<iostream>
#include<vector>
#include<set>
using namespace std;
 bool containsNearbyDuplicates(const vector<int>& nums, int k){
    set<int> window;
    for(int i=0; i<nums.size(); i++){
        if(window.count(nums[i]) > 0){
            return true;
        }
        window.insert(nums[i]);
        if(window.size() > k){
            window.erase(nums[i-k]);
        }
 }
return false;
}
 int main(){
    vector<int> nums = {1, 2, 3, 1, 2 ,3};
    int k = 3;
    cout << boolalpha;
    cout << "The array contains nearby duplicates: " << containsNearbyDuplicates(nums, k) << endl;
    return 0;
 }
