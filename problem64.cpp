#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> nums;
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    } 
    sort(nums.begin(), nums.end());
    for(int i : nums){
        cout << i << " ";
    }
    return 0;
}
