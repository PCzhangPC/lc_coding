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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode(-1);
        ListNode* tmp = head;

        for (vector<ListNode*>::iterator iter = lists.begin(); iter != lists.end();) {
            if (*iter == NULL) {
                lists.erase(iter);
                continue;
            }
            iter++;
        }

        while (!lists.empty()) {
            vector<ListNode*>::iterator min_val = lists.begin();
            for (vector<ListNode*>::iterator iter = lists.begin() + 1; iter != lists.end(); ++iter)
                if ((*iter)->val < (*min_val)->val)
                    min_val = iter;

            tmp->next = (*min_val);
            tmp = tmp->next;
            if ((*min_val)->next == NULL)
                lists.erase(min_val);
            else
                (*min_val) = (*min_val)->next;
        }

        return head->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}