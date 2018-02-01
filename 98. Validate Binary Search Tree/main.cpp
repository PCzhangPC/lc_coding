#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (root) {
            bool left_ok = false, right_ok = false;
            if (root->left == NULL || (find_max(root->left) < root->val && isValidBST(root->left)))
                left_ok = true;

            if (root->right == NULL || (find_min(root->right) > root->val && isValidBST(root->right)))
                right_ok = true;

            return left_ok && right_ok;
        }

        return true;
    }

    int find_max(TreeNode* t) {
        int max_num = t->val;
        find_max_help(t->left, max_num);
        find_max_help(t->right, max_num);

        return  max_num;
    }

    void find_max_help(TreeNode* t, int& max_val) {
        if(t) {
            max_val = t->val > max_val ? t->val : max_val;
            find_max_help(t->left, max_val);
            find_max_help(t->right, max_val);
        }
    }

    int find_min(TreeNode* t) {
        int min_num = t->val;
        find_min_help(t->left, min_num);
        find_min_help(t->right, min_num);

        return min_num;
    }

    void find_min_help(TreeNode* t, int& min_val) {
        if(t) {
            min_val = t->val < min_val ? t->val : min_val;
            find_max_help(t->left, min_val);
            find_max_help(t->right, min_val);
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}