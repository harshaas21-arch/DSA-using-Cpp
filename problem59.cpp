#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums){
    bool result = next_permutation(nums.begin(), nums.end());
    if(result == true){
        for(int i : nums){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        cout << "Not possible " << endl;
    }
}
int main(){
    vector<int> nums = {2,3,1};
    nextPermutation(nums);
    return 0;
}