#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;

        int sum = 0;
        do_help(root, sum, 0);
        return sum;
    }

    void do_help(TreeNode* t, int &sum, int last_level) {
        int tmp = last_level * 10 + t->val;

        if (!t->left && !t->right) {
            sum += tmp;
            return;
        }

        if (t->left)
            do_help(t->left, sum, tmp);


        if (t->right)
            do_help(t->right, sum, tmp);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}