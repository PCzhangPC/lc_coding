#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* h = new ListNode(0);
        h->next = head;

        ListNode* p = h;
        while (p->next) {
            if (p->next->val == val) {
                ListNode* t = p->next;
                p->next = p->next->next;
                delete t;
            } else {
                p = p->next;
            }
        }

        return h->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}