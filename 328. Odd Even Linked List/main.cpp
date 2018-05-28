#include <iostream>

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);

        ListNode* p = head, *p1 = odd, *p2 = even;
        int i = 1;
        while (p) {
            if (i % 2) { //odd
                p1->next = p;
                p1 = p;
            } else {  //even
                p2->next = p;
                p2 = p;
            }

            i++;
            p = p->next;
        }

        p2->next = NULL;
        p1->next = even->next;
        return odd->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}