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
    int sumOfLeftLeaves(TreeNode* root) {
        int count = 0;
        help(count, 0, root);
        return count;
    }

    void help(int &count, int left, TreeNode* root) {
        if (!root)
            return;

        if (left && !root->left && !root->right)
            count += root->val;

        help(count, 1, root->left);
        help(count, 0, root->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}