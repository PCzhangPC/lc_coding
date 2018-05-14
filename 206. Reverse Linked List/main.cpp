#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)
            return head;

        if (!head->next->next) {
            head->next->next = head;
            head = head->next;
            head->next->next = NULL;
            return head;
        }

        ListNode* p1 = head;
        ListNode* p2 = p1->next;
        ListNode* p3 = p2->next;

        while (true) {
            p2->next = p1;

            if (!p3)
                break;

            p1 = p2;
            p2 = p3;
            p3 = p3->next;
        }

        head->next = NULL;
        head = p2;
        return head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}