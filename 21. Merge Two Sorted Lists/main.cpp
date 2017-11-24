#include <iostream>
using namespace std;



struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 != NULL && l2 != NULL) {
            ListNode node(0);
            ListNode* head = &node;
            ListNode* tmp = head;

            while (l1 != NULL && l2 !=NULL) {
                if (l1->val < l2->val) {
                    tmp->next = l1;
                    tmp = l1;
                    l1 = l1->next;
                } else {
                    tmp->next = l2;
                    tmp = l2;
                    l2 = l2->next;
                }
            }

            tmp->next = l1 == NULL ? l2 : l1;
            return head->next;
        }

        return l1 == NULL ? l2 : l1;
    }
};

int main() {
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(2);
    Solution s;
    ListNode* res = s.mergeTwoLists(l1, l2);

    for (;res!=NULL;res= res->next)
        cout << res->val << " ";

    return 0;
}