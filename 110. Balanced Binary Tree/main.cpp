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
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;

        int left_height = get_height(root->left);
        int right_height = get_height(root->right);

        return abs(left_height - right_height) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int get_height(TreeNode* root) {
        if (!root)
            return 0;

        int left = get_height(root->left);
        int right = get_height(root->right);
        return left > right ? left + 1 : right + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}