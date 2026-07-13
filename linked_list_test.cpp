#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = nullptr;

    //Traversing the list
    Node* temp= first;
    while(temp!=nullptr){
        cout << "Node value: " << temp->data << " at address: " << temp << endl;
        temp = temp->next;
    }

    delete first;
    delete second;
    delete third;

    return 0;
}

