#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int length = 0;
        ListNode* p = head;
        while (p) {
            length++;
            p = p->next;
        }

        if (length > 1) {
            p = head;
            for (int i = 0; i < length / 2 - 1; i++) {
                p = p->next;
            }

            ListNode* l2 = sortList(p->next);
            p->next = NULL;
            ListNode* l1 = sortList(head);

            return merge(l1, l2);
        };
        return head;
    }

    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1)
            return l2;

        if (!l2)
            return l1;

        ListNode* res = l1->val < l2->val ? l1 : l2;
        res->next = l1->val < l2->val ? merge(l1->next, l2) : merge(l1, l2->next);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}