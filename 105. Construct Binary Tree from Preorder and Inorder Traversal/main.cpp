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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build_help(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }

    TreeNode* build_help(vector<int>& preorder, int pre_start, int pre_end,
                         vector<int>& inorder, int in_start, int in_end) {
        TreeNode* root = NULL;
        if (pre_start <= pre_end) {
            int mid = preorder[pre_start];
            root = new TreeNode(mid);
            int index;

            for (index = in_start; index <= in_end; index++) {
                if (inorder[index] == mid)
                    break;
            }

            root->left = build_help(preorder, pre_start + 1, pre_start + (index - in_start),
                                    inorder, in_start, index - 1);
            root->right = build_help(preorder, pre_start + (index - in_start + 1), pre_end, inorder, index + 1, in_end);
        }

        return root;
    }
};

int main() {
    vector<int> preorder = {1, 2, 3};
    vector<int> inorder = {2, 1, 3};
    Solution s;
    s.buildTree(preorder, inorder);
    return 0;
}