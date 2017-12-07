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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(-1);
        ListNode* equal_big = new ListNode(-1);
        ListNode* ps = small;
        ListNode* pe = equal_big;

        for (ListNode* p = head; p != NULL; p = p->next) {
            if (p->val < x) {
                ps->next = p;
                ps = p;
            } else {
                pe->next = p;
                pe = p;
            }
        }

        pe->next = NULL;
        ps->next = equal_big->next;
        return small->next;
    }
};

int main() {
    vector<int> vec = {1,4,3,2,5,2};
    ListNode* sen = new ListNode(-1);
    ListNode* p = sen;
    for (int i = 0; i < vec.size(); i++, p = p->next)
        p->next = new ListNode(vec[i]);

    Solution s;
    ListNode* res = s.partition(sen->next, 3);

    for (ListNode* pp = res; pp != NULL; pp = pp->next)
        cout << pp->val << " ";
    return 0;
}