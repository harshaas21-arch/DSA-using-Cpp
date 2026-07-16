#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

bool hasCycle(Node* head){
    if(head == nullptr || head->next == nullptr){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!=nullptr && fast->next != nullptr){
        slow = slow->next;

        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = nullptr;

    if(hasCycle(head)){
        cout << "Result: Cycle detected in the memory link! \n";
    }
    else{
        cout << "Result: Safe list. No cycle found \n";
    }

    return 0;
}