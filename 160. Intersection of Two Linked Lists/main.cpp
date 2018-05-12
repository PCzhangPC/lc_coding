#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB)
            return NULL;

        int len_a = get_len(headA);
        int len_b = get_len(headB);

        ListNode* ha = headA;
        ListNode* hb = headB;

        int diff = len_a - len_b;

        if (diff < 0) {
            for (int i = 0; i < -diff; i++) {
                hb = hb->next;
            }
        } else {
            for (int i = 0; i < diff; i++) {
                ha = ha->next;
            }
        }

        while (ha != NULL && hb != NULL) {
            if (ha == hb) {
                return ha;
            }
            ha = ha->next;
            hb = hb->next;
        }

        return NULL;
    }

    int get_len(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}