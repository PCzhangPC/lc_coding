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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        do_help(root, res);
        return res;
    }

    void do_help(TreeNode* t, vector<int> &res) {
        if (t) {
            res.push_back(t->val);
            do_help(t->left, res);
            do_help(t->right, res);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}