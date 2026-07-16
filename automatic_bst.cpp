#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insertNode(TreeNode* root, int value){
    if(root == nullptr){
        return new TreeNode(value);
    }

    if(value < root->val){
        root->left = insertNode(root->left, value);
    }
    else if(value > root->val){
        root->right = insertNode(root->right, value);
    }

    return root;
}

void printInOrder(TreeNode* root){
    if(root == nullptr) return;
    printInOrder(root->left);
    cout << root->val << "\n";
    printInOrder(root->right);
}

int main(){
    //  A raw list of data
    vector<int> rawData = {45, 12, 89, 5, 23, 67, 102};

    TreeNode* root = nullptr;

    for(int value : rawData){
        root = insertNode(root, value);
    }

    cout << "Automated BST arranged output (Sorted): ";
    printInOrder(root);
    cout << "\n";
return 0;
}
