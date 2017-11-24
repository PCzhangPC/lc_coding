#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pre = head;
        ListNode* lat = head;
        for (int j = 0; j < n; j++) {
            pre = pre-> next;
        }

        if (pre == NULL)
            return head->next;

        while (pre->next != NULL) {
            pre = pre->next;
            lat = lat->next;
        }

        lat->next = lat->next->next;
        return head;
    }
};

int main() {

    return 0;
}