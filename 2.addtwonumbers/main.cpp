#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(-1);
        ListNode* tmp = res ;
        bool flag = 0;

        while (l1 || l2) {
            int value;
            if (l1 && l2) {
                value = l1->val + l2->val + flag;

                flag = value >= 10 ;

                tmp -> next = new ListNode(value % 10);
                tmp = tmp->next;
                l1 = l1->next;
                l2 = l2->next;
            } else if (l1) {
                value = l1->val + flag;

                flag = value >= 10 ;

                tmp -> next = new ListNode(value % 10);
                tmp = tmp->next;
                l1 = l1->next;
            } else if (l2) {
                value = l2->val + flag;

                flag = value >= 10 ;

                tmp -> next = new ListNode(value % 10);
                tmp = tmp->next;
                l2 = l2->next;
            }
        }

        if (flag)
            tmp -> next = new ListNode(1);

        return res -> next;
    }
};

int main() {

    return 0;
}