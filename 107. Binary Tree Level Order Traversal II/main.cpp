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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root) {
            vector<TreeNode*> vec;
            vec.push_back(root);

            do_help(vec, res);
        }

        return res;
    }

    void do_help(vector<TreeNode*> &vec, vector<vector<int>> &sta) {
        if(vec.size()) {
            vector<int> tmp;
            vector<TreeNode*> new_vec;
            for(int i = 0; i < vec.size(); i++) {
                tmp.push_back(vec[i]->val);

                if(vec[i]->left)
                    new_vec.push_back(vec[i]->left);
                if(vec[i]->right)
                    new_vec.push_back(vec[i]->right);
            }

            do_help(new_vec, sta);
            sta.push_back(tmp);
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}