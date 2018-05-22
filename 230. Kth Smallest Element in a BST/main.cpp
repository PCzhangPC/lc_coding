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
    int kthSmallest(TreeNode* root, int k) {
        int n = 0;
        return solve(root, n, k);
    }

    int solve(TreeNode* root, int &n, int k) {
        if (!root)
            return -1;

        int res = solve(root->left, n, k);
        if (n == k)
            return res;

        n++;
        if (n == k)
            return root->val;

        return solve(root->right, n, k);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}