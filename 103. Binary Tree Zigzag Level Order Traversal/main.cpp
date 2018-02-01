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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root) {
            vector<TreeNode*> vec;
            vec.push_back(root);
            do_help(vec, res, 1);
        }

        return res;
    }

    void do_help(vector<TreeNode*> &vec, vector<vector<int>> &res, bool mode) {
        if (vec.size()) {
            vector<TreeNode*> new_vec;
            vector<int> tmp;

            for (int i = 0; i < vec.size(); i++)
                tmp.push_back(vec[i]->val);

            for (int i = vec.size() - 1; i >= 0; i--) {
                if (mode) {
                    if (vec[i]->right)
                        new_vec.push_back(vec[i]->right);
                    if (vec[i]->left)
                        new_vec.push_back(vec[i]->left);
                } else {
                    if (vec[i]->left)
                        new_vec.push_back(vec[i]->left);
                    if (vec[i]->right)
                        new_vec.push_back(vec[i]->right);
                }
            }

            res.push_back(tmp);
            do_help(new_vec, res, !mode);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}