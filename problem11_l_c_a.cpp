#include<iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root == nullptr || root == p || root ==q){
        return root;
    }

    TreeNode* leftSearchResult = lowestCommonAncestor(root->left, p, q);
    TreeNode* rightSearchResult = lowestCommonAncestor(root->right, p, q);

    if(leftSearchResult != nullptr && rightSearchResult != nullptr){
        return root;
    }

    return (leftSearchResult != nullptr) ? leftSearchResult : rightSearchResult;
}

int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    TreeNode* p = root->left;  // Node 5
    TreeNode* q = root->right; // Node 1

    TreeNode* lca = lowestCommonAncestor(root, p, q);

    cout << "Lowest Common Ancestor of " << p->val << " and " << q->val << " is: " << lca->val << "\n";

    return 0;
}
