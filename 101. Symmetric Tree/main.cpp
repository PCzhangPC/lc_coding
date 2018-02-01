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
    bool isSymmetric(TreeNode* root) {
        if (root) {
            TreeNode* t1 = root->left;
            TreeNode* t2 = root->right;
            return judge_help(t1, t2);
        }

        return true;
    }

    bool judge_help(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2)
            return true;

        else if (!t1 || !t2)
            return false;

        else {
            return t1->val == t2->val && judge_help(t1->left, t2->right) && judge_help(t1->right, t2->left);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}