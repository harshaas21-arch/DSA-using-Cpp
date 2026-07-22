#include<iostream>
using namespace std;

struct Listnode{
    int val;
    Listnode *next;
    Listnode(int x){
        val = x;
        next = nullptr;
    }
};
void reorderList(Listnode* head){
    Listnode* slow = head;
    Listnode* fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Listnode* prev = nullptr;
    Listnode* curr = slow->next;
    slow->next = nullptr;

    while (curr)
    {
        Listnode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    
    Listnode* first = head;
    Listnode* second = prev;

    while(second){
        Listnode* tmp1 = first->next;
        Listnode* tmp2 = second->next;

        first->next = second;
        second->next = tmp1;

        first = tmp1;
        second = tmp2;
    }
}
void printlist(Listnode* head){
    while(head){
        cout << head->val << (head->next ? " -> " : "");
        head = head->next;
    }
    cout << "\n";
}
int main() {
  
    Listnode* head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);
    head->next->next->next = new Listnode(4);
    head->next->next->next->next = new Listnode(5);

    std::cout << "Original: ";
    printlist(head);

    reorderList(head);

    std::cout << "Reordered: ";
    printlist(head); 

    return 0;
}