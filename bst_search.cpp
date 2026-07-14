#include<iostream>
using namespace std;

struct BSTNode
{
   int data;
   BSTNode* left;
   BSTNode* right;

   BSTNode(int val){
    data = val;
    left = nullptr;
    right = nullptr;
   }
};

BSTNode* searchBST(BSTNode* root, int val){
    if(root == nullptr || root->data == val){
        return root;
    }
    if(val < root->data){
        return searchBST(root->left, val);
    }
    return searchBST(root->right, val);
}

int main(){
    // Constructing the BST:
    //      8
    //     / \
    //    3   10
    //   / \
    //  1   6
    BSTNode* root = new BSTNode(8);
    root->left = new BSTNode(3);
    root->right = new BSTNode(10);
    root->left->left = new BSTNode(1);
    root->left->right = new BSTNode(6);

    int target = 6;
    BSTNode* result = searchBST(root, target);

    if(result!=nullptr){
        cout << "Element " << target << " found in BST! Subtree root value: " << result->data << endl;
    }else{
        cout << "Element not found" << endl;
    }
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
