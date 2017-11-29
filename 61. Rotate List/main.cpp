#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head != NULL && k > 0) {
            int count = 0;
            for (ListNode* p = head; p != NULL; p = p->next)
                count++;

            k = k % count;
            if (k == 0)
                return head;

            ListNode* rsta = head;
            ListNode* rend = head;
            for (int i = 0; i < k; i++)
                rend = rend->next;

            while (rend->next != NULL) {
                rend = rend->next;
                rsta = rsta->next;
            }

            rend->next = head;
            head = rsta -> next;
            rsta->next = NULL;
        }
        return head;
    }
};

int main() {
    vector<int> vec = {1,2,3,4,5};
    ListNode* node = new ListNode(-1);
    ListNode* p = node;
    for (int i = 0; i < vec.size(); i++) {
        p->next = new ListNode(vec[i]);
        p = p->next;
    }

    Solution s;
    ListNode* res = s.rotateRight(node->next, 4);
    for (ListNode* pp = res; pp !=NULL; pp = pp->next)
        cout << pp->val << " ";

    cout << endl;
    return 0;
}