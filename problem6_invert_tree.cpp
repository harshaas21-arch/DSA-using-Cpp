#include<iostream>
#include<algorithm>
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

TreeNode* invertTree(TreeNode* root){
    if(root == nullptr){
        return nullptr;
    }
    // Diving into subtrees
    TreeNode* leftInverted = invertTree(root->left);
    TreeNode* rightInverted = invertTree(root->right);
    // Swap the left and right children of the current node;
    root->left = rightInverted;
    root->right = leftInverted;

    return root;
}

void printPreOrder(TreeNode* root){
    if(root == nullptr) return;
    cout << root->val << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main(){
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original tree order: ";
    printPreOrder(root);
    cout << "\n";

    root = invertTree(root);

    cout << "Inverted tree order: ";
    printPreOrder(root);
    cout << "\n";

    return 0;

}