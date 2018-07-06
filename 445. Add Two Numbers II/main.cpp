#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int m = 0;
        int n = 0;
        ListNode* p = l1;
        while(p) {
            ++m;
            p = p->next;
        }
        p = l2;
        while(p) {
            ++n;
            p = p->next;
        }

        if (m == n) {
            int ret = addnode(l1, l2);
            if (ret) {
                ListNode *res = new ListNode(1);
                res->next = l1;
                return res;
            }
            return l1;
        }

        int diff = abs(m - n);
        p = m - n > 0 ? l1->next : l2->next;
        while (diff > 1) {
            p = p->next;
            --diff;
        }

        int ret = addnode(p, m < n ? l1 : l2);
        if (ret) {
            int r = addone(m > n ? l1 : l2, p);
            if (r) {
                ListNode *res = new ListNode(1);
                res->next = m > n ? l1 : l2;
                return res;
            }
        }

        return m > n ? l1 : l2;
    }

    int addone(ListNode* l, ListNode* stop) {
        if (l == stop)
            return 1;

        l->val += addone(l->next, stop);
        if (l->val == 10) {
            l->val = 0;
            return 1;
        }
        return 0;
    }

    int addnode(ListNode* l1, ListNode* l2) {
        if (!l1 || !l2)
            return 0;

        l1->val = l1->val + l2->val + addnode(l1->next, l2->next);
        if (l1->val < 10)
            return 0;

        l1->val = l1->val - 10;
        return 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}