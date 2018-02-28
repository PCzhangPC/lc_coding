#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        if (head) {
            ListNode* low = head;
            ListNode* fast = head;

            ListNode* head2;
            while (true) {
                if (!fast) {
                    head2 = low;
                    break;
                }

                if (!fast->next) {
                    head2 = low->next;
                    break;
                }

                fast = fast->next->next;
                low = low->next;
            }

            reverse(head2);
            merge(head, head2);
        }
    }

    void reverse(ListNode* &head) {
        if (!head || !head->next)
            return;

        if (!head->next->next) {
            head->next->next = head;
            head = head->next;
            head->next->next = NULL;
            return;
        }

        ListNode *p1 = head;
        ListNode *p2 = p1->next;
        ListNode *p3 = p2->next;

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
    }

    void merge(ListNode* head1, ListNode* head2) {
        if (!head2)
            return;

        ListNode* p1 = head1->next;
        ListNode* p2 = head2->next;

        while (true) {
            if (p1 == head2)
                break;

            if (!p2) {
                head1->next = head2;
                head2->next = p1;
                p1->next = NULL;
                break;
            }

            head1->next = head2;
            head2->next = p1;
            head1 = p1;
            head2 = p2;
            p1 = p1->next;
            p2 = p2->next;
        }
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    Solution s;
    s.reorderList(head);
    return 0;
}