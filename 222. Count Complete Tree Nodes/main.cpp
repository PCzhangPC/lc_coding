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
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;

        int left_dep = find_left(root->left);
        int right_dep = find_right(root->right);

        if (left_dep == right_dep)
            return (1 << (left_dep + 1)) - 1;

        return countNodes(root->left) + countNodes(root->right) + 1;
    }

    int find_left(TreeNode* root) {
        int n = 0;
        while (root) {
            n++;
            root = root->left;
        }
        return n;
    }

    int find_right(TreeNode* root) {
        int n = 0;
        while (root) {
            n++;
            root = root->right;
        }
        return n;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}