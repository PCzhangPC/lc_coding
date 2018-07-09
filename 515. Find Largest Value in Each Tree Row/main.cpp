#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if (!root)
            return res;

        queue<TreeNode*> vec;
        vec.push(root);

        while(true) {
            bool flag = 0;
            int s = vec.size();
            int max_val = INT32_MIN;
            for (int i = 0; i < s; ++i) {
                if (vec.front()->val > max_val)
                    max_val = vec.front()->val;

                if (vec.front()->left) {
                    vec.push(vec.front()->left);
                    flag = 1;
                }
                if (vec.front()->right) {
                    vec.push(vec.front()->right);
                    flag = 1;
                }
                vec.pop();
            }

            res.push_back(max_val);
            if (!flag)
                break;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}