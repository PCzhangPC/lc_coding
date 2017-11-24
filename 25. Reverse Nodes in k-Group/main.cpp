#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k <= 1)
            return head;

        ListNode* pend = head;
        for (int i = 0; i < k - 1; i++) {
            if (pend == NULL || pend->next == NULL)
                return head;
            pend = pend->next;
        }
        reverse(head, pend);
        pend->next = reverseKGroup(pend->next, k);

        return head;
    }

    void reverse(ListNode* &pstart, ListNode* &pend) {
        if (pend == pstart->next) {
            pstart->next = pend->next;
            pend->next = pstart;
            ListNode *tmp = pstart;
            pstart = pend;
            pend = tmp;
            return;
        }

        ListNode* p1 = pstart;
        ListNode* p2 = p1->next;
        ListNode* p3 = p2->next;

        while (p2 != pend) {
            p2->next = p1;
            p1 = p2;
            p2 = p3;
            p3 = p3->next;
        }
        p2->next = p1;
        pstart->next = p3;
        ListNode* tmp = pstart;
        pstart = pend;
        pend = tmp;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}