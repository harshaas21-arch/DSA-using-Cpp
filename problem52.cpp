#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int findKthLargest(const vector<int>& nums, int k){
    priority_queue<int> pq;
    for(int i : nums){
        pq.push(i);
    }
    for(int i=0; i<k-1; i++){
        pq.pop();
    }
    return pq.top();
}
int main(){
    vector<int> num = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    int result = findKthLargest(num, k);
    cout << "The kth largest element is: " << result;
    cout << endl;

    return 0;
}