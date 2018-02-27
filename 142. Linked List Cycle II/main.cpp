#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head) {
            ListNode* p1 = head;
            ListNode* p2 = head;

            while (true) {
                p2 = p2->next;
                if (!p2)
                    return NULL;
                p2 = p2->next;
                if(!p2)
                    return NULL;

                p1 = p1->next;

                if (p1 == p2) {
                    ListNode* entry = head;
                    while (entry != p1) {
                        entry = entry->next;
                        p1 = p1->next;
                    }
                    return entry;
                }
            }
        }
        return NULL;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}