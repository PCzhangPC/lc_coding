#include <iostream>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* res = new ListNode(0);

        while (head) {
            ListNode* p1 = res;
            ListNode* p2 = res->next;
            while (true) {
                if (!p2 || head->val < p2->val) {
                    p1->next = head;
                    head = head->next;
                    p1->next->next = p2;
                    break;
                } else {
                    p1 = p2;
                    p2 = p2->next;
                }
            }
        }

        return res->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}