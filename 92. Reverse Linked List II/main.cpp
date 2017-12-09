#include <iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if ( n > m ) {
            if (m == 1)
                reverse(head, n - m + 1);
            else {
                int i = 1;
                ListNode *p = head;

                while (i < m - 1) {
                    p = p->next;
                    i++;
                }
                reverse(p->next, n - m + 1);
            }
        }

        return head;
    }

    void reverse(ListNode* &head, int len) {
        if (len == 2) {
            ListNode* p1 = head;
            head =  p1->next;
            p1->next = head->next;
            head->next = p1;
        } else {
            ListNode* p1 = head;
            ListNode* p2 = p1->next;
            ListNode* p3 = p2->next;
            int i = 0;
            while(true) {
                p2->next = p1;
                if (i < len - 3) {
                    i++;
                    p1 = p2;
                    p2 = p3;
                    p3 = p3->next;
                } else
                    break;
            }

            head->next = p3->next;
            p3->next = p2;
            head = p3;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}