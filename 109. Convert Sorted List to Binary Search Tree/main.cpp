#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode *res_root = NULL;
        ListNode *tmp = head;
        int count = 0;
        for(;tmp != NULL; tmp = tmp->next) {
            count++;
        }

        constract(res_root, head, count);
        return res_root;
    }

    void constract(TreeNode* &t, ListNode* start, int num) {
        if (num > 0) {
            ListNode* tmp = start;
            int mid = num / 2;
            for (int i = 0; i != mid; i++) {
                tmp = tmp->next;
            }
            t = new TreeNode(tmp->val);

            constract(t->left, start, num / 2);
            constract(t->right, tmp->next, num - num / 2 - 1);
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}