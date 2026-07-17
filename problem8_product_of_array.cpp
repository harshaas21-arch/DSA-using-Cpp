#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& nums){
    int n = nums.size();
    vector<int> answer(n,1);

    int prefixProduct = 1;
    for(int i=0; i<n; i++){
        answer[i] = prefixProduct;
        prefixProduct *= nums[i];
    }
    int suffixProdutct = 1;
    for(int i=n-1; i>=0; i--){
        answer[i] *= suffixProdutct;
        suffixProdutct *= nums[i];
    }
    return answer;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<int> result = productExceptSelf(nums);

    cout << "Product except self: ";
    for(int x : result){
        cout << x << " ";
    }
cout << "\n";
    return 0;
}