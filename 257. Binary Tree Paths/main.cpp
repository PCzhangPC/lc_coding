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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (!root)
            return res;

        string s = "";
        solve(root, s, res);
        return res;
    }

    void solve(TreeNode* root, string tmp, vector<string>& res) {
        tmp.append(to_string(root->val));
        if (!root->left && !root->right)
            res.push_back(tmp);

        tmp.append("->");
        if (root->left)
            solve(root->left, tmp, res);

        if (root->right)
            solve(root->right, tmp, res);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}