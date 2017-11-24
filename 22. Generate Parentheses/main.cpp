#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s = "";
        add_char(res, s, n, n);

        return res;
    }

    void add_char(vector<string> &res, string str, int n, int m) {
        if (n < 0 || m < 0)
            return;

        if (n == 0 && m == 0)
            res.push_back(str);

        if (n == m) {
            str += '(';
            add_char(res, str, n - 1, m);
        }

        if (n < m) {
            add_char(res, str + '(', n-1, m);
            add_char(res, str + ')', n, m-1);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}