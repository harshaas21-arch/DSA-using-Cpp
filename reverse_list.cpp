#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};
// Function to reverse the list
Node* reverse_List(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextTrack = nullptr;

    while(curr!= nullptr){
        nextTrack = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTrack;
    }
    return prev;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout << temp->data << " -> " ;
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    Node* newhead = reverse_List(head);

    cout << "Reversed List: ";
    printList(newhead);

    Node* temp = newhead;
    while(temp!= nullptr){
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    return 0;
}