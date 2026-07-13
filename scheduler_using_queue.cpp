#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Task{
    string name;
    int remaining_time;
};

int main(){
    queue<Task> ready_queue;
    int quantum = 2;

    // Initializing ready queue with some tasks
    ready_queue.push({"Task1", 5});
    ready_queue.push({"Task2", 2});
    ready_queue.push({"Task3", 3});
    ready_queue.push({"Task4", 6});

    cout << "Round robing scheduler" << endl;
    while(!ready_queue.empty()){
        Task current = ready_queue.front();
        ready_queue.pop();
        if(current.remaining_time <= quantum){
            cout << current.name << " Finished execution" << endl;
        }
        else{
            current.remaining_time -= 2;
            cout << current.name << " ran for 2s. Remaining time is " << current.remaining_time << "s" << endl;
            ready_queue.push(current);
        }
    }
    cout << "All tasks completed" << endl;
    return 0;
}