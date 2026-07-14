#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int> maxHeap;

maxHeap.push(5);
maxHeap.push(200);
maxHeap.push(10);

while(!maxHeap.empty()){
    cout << maxHeap.top() << " ";
    maxHeap.pop();
}
cout << endl;
return 0;
}
