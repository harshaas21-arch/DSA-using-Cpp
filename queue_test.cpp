#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("TaskA");
    q.push("TaskB");
    q.push("TaskC");

    cout << "Size is: " << q.size()<< endl;

    cout << "Next up in line: " << q.front() << endl;

    q.pop();
    cout << "Now, next up in line is " << q.front() << endl;
    return 0;
}