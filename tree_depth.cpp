#include<iostream>
#include<algorithm>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int maxDepth(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    
    return 1 + max(leftHeight, rightHeight);
}

int main(){
    /* 
       Creating this tree structure:
             1
            / \
           2   3
          /     \ 
         4      5
                 \
                  6
    */
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(4);
   root->right->right = new TreeNode(5);
   root->right->right->right = new TreeNode(6);

   cout << "Max Depth of the Tree: " << maxDepth(root) << endl;

   delete root->right->right->right;
   delete root->right->right;
   delete root->left->left;
   delete root->left;
   delete root->right;
   delete root;
   return 0;
}