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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        if (nums.size()) {
            constact_help(root, nums, 0, nums.size() - 1);
        }
        return root;
    }

    void constact_help(TreeNode* &t, vector<int>& nums, int start, int end) {
        if (start <= end) {
            int mid = (start + end) / 2;
            t = new TreeNode(nums[mid]);

            constact_help(t->left, nums, start, mid - 1);
            constact_help(t->right, nums, mid + 1, end);
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}