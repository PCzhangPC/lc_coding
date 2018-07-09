#include <iostream>
#include <map>
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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        map<int, int> dict;
        vector<int> res;
        if (!root)
            return res;

        find(root, dict);
        int max_fre = 0;
        for (map<int, int>::iterator it = dict.begin(); it != dict.end(); ++it) {
            if (it->second == max_fre)
                res.push_back(it->first);
            else if (it->second > max_fre) {
                res.clear();
                res.push_back(it->first);
                max_fre = it->second;
            }
        }
        return res;
    }

    int find(TreeNode* root, map<int, int> &dict) {
        if (!root)
            return 0;

        int left_val = find(root->left, dict);;
        int right_val = find(root->right, dict);;
        int sum = root->val + left_val + right_val;
        dict[sum] += 1;
        return sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}