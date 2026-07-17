#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool containsDuplicate(const vector<int>& nums){
    unordered_set<int> seen;
    for(int num : nums){
        if(seen.find(num) != seen.end()){
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    if(containsDuplicate(nums)){
        cout << "Result: Duplicate detected \n";
    }
    else{
        cout << "Result: All elements are unique \n";
    }
    return 0;
}