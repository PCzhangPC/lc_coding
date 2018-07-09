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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> vec;
        vec.push(root);
        int last_lavel;
        while(true) {
            bool flag = 0;
            int s = vec.size();
            for (int i = 0; i < s; ++i) {
                if (vec.front()->left) {
                    vec.push(vec.front()->left);
                    flag = 1;
                }
                if (vec.front()->right) {
                    vec.push(vec.front()->right);
                    flag = 1;
                }

                if (i == 0) {
                    last_lavel = vec.front()->val;
                }
                vec.pop();
            }

            if (!flag)
                break;
        }
        return last_lavel;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}