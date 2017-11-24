#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        reverse(head);
        return head;
    }

    void reverse(ListNode* &p) {
        if (p != NULL && p->next != NULL) {
            ListNode* p2 = p->next;
            p->next = p2->next;
            p2->next = p;
            p = p2;

            reverse(p->next->next);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}