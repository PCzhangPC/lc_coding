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
    int rob(TreeNode* root) {
        vector<int> ret = solve(root);
        return max(ret[0], ret[1]);
    }

    vector<int> solve(TreeNode* root) {
        if (!root)
            return vector<int>(2, 0);

        vector<int> ret(2, 0);
        vector<int> left = solve(root->left);
        vector<int> right = solve(root->right);

        ret[0] = left[1] + right[1] + root->val;
        ret[1] = max(left[0], left[1]) + max(right[0], right[1]);
        return ret;
    }
};

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(3);
    Solution s;
    cout << s.rob(root) << endl;
    return 0;
}