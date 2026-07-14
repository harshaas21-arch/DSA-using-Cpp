#include<iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode* left;
    BSTNode* right;
    
    BSTNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    BSTNode* root = new BSTNode(8);
    root->left = new BSTNode(3);
    root->right = new BSTNode(10);

    cout << "Valid BST Root: " << root->data << endl;
    cout << "Left Child(Smaller): " <<root->left->data << endl;
    cout << "Right Child(Bigger): " << root->right->data << endl;

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}