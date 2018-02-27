#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head) {
            ListNode* p1 = head;
            ListNode* p2 = head;

            while (true) {
                p2 = p2->next;
                if (!p2)
                    return false;
                p2 = p2->next;
                if(!p2)
                    return false;

                p1 = p1->next;

                if (p1 == p2)
                    return true;
            }
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}