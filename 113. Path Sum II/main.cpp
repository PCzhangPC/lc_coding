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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if (root) {
            vector<int> tmp;
            help(root, res, tmp, sum);
        }

        return res;
    }

    void help(TreeNode* root, vector<vector<int>> &res, vector<int> tmp, int sum) {
        if (!root)
            return;

        if (!root->left && !root->right && root->val == sum) {
            tmp.push_back(root->val);
            res.push_back(tmp);
            return;
        }

        if (root->left || root->right) {
            tmp.push_back(root->val);
            help(root->left, res, tmp, sum - root->val);
            help(root->right, res, tmp, sum - root->val);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}