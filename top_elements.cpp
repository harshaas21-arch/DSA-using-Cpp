#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void printTopK(const vector<int>& stream, int k){
    // Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int num : stream){
        minHeap.push(num);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    cout << "Top " << k << " highest numbers in the stream are: ";
    while(!minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main(){
    vector<int> sensorStream  {15,2, 45, 10, 80, 60, 3};
    int k = 3;

    printTopK(sensorStream, k);

    return 0;
}