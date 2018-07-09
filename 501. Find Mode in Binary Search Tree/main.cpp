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
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        int max_fre = -1;
        int last_val = -1;
        int last_count = -1;
        inorder(root, res, max_fre, last_val, last_count);
        return res;
    }

    void inorder(TreeNode* root, vector<int> &res, int &max_fre, int &last_val, int &last_count) {
        if (!root)
            return;

        inorder(root->left, res, max_fre, last_val, last_count);

        if (last_count == -1) {
            last_val = root->val;
            last_count = 1;
        } else {
            if (root->val == last_val) {
                ++last_count;
            } else {
                last_count = 1;
                last_val = root->val;
            }
        }

        if (last_count == max_fre)
            res.push_back(root->val);
        else if (last_count > max_fre) {
            res.clear();
            res.push_back(root->val);
            max_fre = last_count;
        }

        inorder(root->right, res, max_fre, last_val, last_count);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}