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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root = do_help(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
        return root;
    }

    TreeNode* do_help(vector<int>& inorder, int in_start, int in_end,
                 vector<int>& postorder, int post_start, int post_end) {
        TreeNode* root = NULL;
        if(in_start <= in_end) {
            int mid = postorder[post_end];
            root = new TreeNode(mid);
            int index;

            for (index = in_start; index <= in_end; index++) {
                if (inorder[index] == mid)
                    break;
            }

            root->left = do_help(inorder, in_start, index - 1,
                                 postorder, post_start, post_start + index - in_start - 1);

            root->right = do_help(inorder, index + 1, in_end,
                                  postorder, post_start + index - in_start, post_end - 1);
        }

        return root;
    }
};

int main() {
    vector<int> in = {2, 1, 3};
    vector<int> post = {2, 3, 1};
    Solution s;
    s.buildTree(in, post);
    return 0;
}