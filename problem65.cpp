#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
        cin >> size;
    int n1;
    int n2, n3;

    vector<int> nums;
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    } 
    
    cin >> n1;
    nums.erase(nums.begin() + (n1-1));
    
    cin >> n2 >> n3;
    nums.erase(nums.begin()+(n2-1), nums.begin()+(n3-1));
    cout << nums.size() << endl;
    for(int i : nums){
        cout << i << " " ;
    }
    return 0;
}
