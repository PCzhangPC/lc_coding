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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        vector<TreeNode*> help_vec;
        if (!root)
            return res;

        help_vec.push_back(root);
        while (!help_vec.empty()) {
            int s = help_vec.size();
            res.push_back((*(help_vec.end() - 1))->val);

            for (int i = 0; i < s; i++) {
                if (help_vec[0]->left)
                    help_vec.push_back(help_vec[0]->left);

                if (help_vec[0]->right) {
                    int b = help_vec[0]->val;
                    help_vec.push_back(help_vec[0]->right);
                }

                help_vec.erase(help_vec.begin());
            }
        }
        return res;
    }
};

int main() {

    return 0;
}