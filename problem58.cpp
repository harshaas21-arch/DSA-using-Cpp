#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums){
    int even_idx = 0;
    int odd_idx = 1;
    while(even_idx < nums.size() || odd_idx < nums.size()){
        if((nums[even_idx] % 2) == 0){
            even_idx += 2;
        }
        else if((nums[odd_idx] % 2) != 0){
            odd_idx += 2;
        }
        else{
            swap(nums[even_idx], nums[odd_idx]);
            even_idx += 2;
            odd_idx += 2;
        }
    }
    return nums;
}
int main(){
    vector<int> sorting = {1,2,3,4,5,6,7,8,9,10};
    vector<int> result = sortArrayByParity(sorting);
    cout << "Sorted array : " << endl;
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}