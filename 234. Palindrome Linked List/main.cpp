#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size = 0;
        for (ListNode* p = head; p != NULL; p = p->next) {
            size++;
        }

        vector<int> nums;
        ListNode* p = head;
        for (int i = 0; i < size / 2; i++) {
            nums.push_back(p->val);
            p = p->next;
        }

        if (size % 2) {
            p = p->next;
        }

        for (int i = size / 2 - 1; i >= 0; i--) {
            if (nums[i] != p->val)
                return false;
            p = p->next;
        }

        return true;
    }
};

int main() {
    return 0;
}