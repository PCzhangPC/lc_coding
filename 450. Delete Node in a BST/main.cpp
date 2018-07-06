#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return root;

        if (root->val > key)
            root->left = deleteNode(root->left, key);
        else if(root->val < key)
            root->right = deleteNode(root->right, key);
        else {
            if (!root->left || !root->right) {
                return root->left ? root->left : root->right;
            } else {
                TreeNode* p = find_right_min(root->right);
                root->val = p->val;
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }

    TreeNode* find_right_min(TreeNode* root) {
        if (!root->left)
            return root;
        return find_right_min(root->left);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}