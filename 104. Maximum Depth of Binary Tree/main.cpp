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
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;

        int max_left = maxDepth(root->left);
        int max_right = maxDepth(root->right);
        return max_left > max_right ? max_left + 1 : max_right + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}