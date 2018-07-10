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
    int getMinimumDifference(TreeNode* root) {
        if (!root)
            return 0;

        int diff = INT32_MAX;
        int count = 0;
        int last_val = -1;
        inorder(root, last_val, diff, count);
        return diff;
    }

    void inorder(TreeNode* root, int &last_val, int &diff, int &count) {
        if (!root)
            return;

        if (root->left)
            inorder(root->left, last_val, diff, count);

        if (count)
            diff = min(diff, root->val - last_val);
        ++count;
        last_val = root->val;

        if (root->right)
            inorder(root->right, last_val, diff, count);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}