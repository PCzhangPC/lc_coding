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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* sential = new ListNode(-1);
        sential->next = head;
        ListNode* p = sential;
        while (p->next != NULL && p->next->next != NULL) {
            ListNode* tmp = p->next;
            while (tmp->next != NULL && tmp->next->val == tmp->val)
                tmp = tmp->next;

            if (tmp != p->next)
                p->next = tmp->next;
            else
                p = p->next;
        }
        return sential->next;
    }
};

int main() {
    vector<int> vec = {1,1};
    ListNode* sen = new ListNode(-1);
    ListNode* p = sen;
    for (int i = 0; i < vec.size(); i++, p = p->next)
        p->next = new ListNode(vec[i]);

    Solution s;
    s.deleteDuplicates(sen->next);
    return 0;
}