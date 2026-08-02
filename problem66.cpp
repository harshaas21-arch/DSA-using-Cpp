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
    int q;
    cin >> q;
    vector<int> query;
    for(int i=0; i<q; i++){
        int temp;
        cin >> temp;
        query.push_back(temp);
    }
    for(int i=0; i<query.size(); i++){
        int target,index;
        auto it = lower_bound(nums.begin(), nums.end(), query[i]);
        index = it - nums.begin();
        target = nums[index];
        if (it != nums.end() && target == query[i]) {
        int first_index = it - nums.begin();
        cout << "Yes " << first_index+1 << "\n";
    } else {
        int next_index = it - nums.begin();
        cout << "No " << next_index+1 << "\n";
    }
    }

    return 0;
}
