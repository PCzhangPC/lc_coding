#include <iostream>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        int table[n + 1];
        table[0] = 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (i == 0 || s[i - 1] - 48 > 2 || s[i - 1] - 48 == 0)
                    return 0;
                else {
                    table[i + 1] = table [i - 1];
                }
            } else {
                if (s[i] - 48 >= 1 && s[i] - 48 <= 6) {
                    if (i == 0 || s[i - 1] - 48 == 0 || s[i - 1] - 48 > 2 )
                        table[i + 1] = table[i];
                    else
                        table[i + 1] = table[i - 1] + table[i];
                } else {
                    if (i == 0 || s[i - 1] - 48 == 0 || s[i - 1] - 48 > 1)
                        table[i + 1] = table[i];
                    else
                        table[i + 1] = table[i - 1] + table[i];
                }
            }
        }

        for (int i = 0; i < n + 1; i++) {
            cout << table[i] << " ";
        }
        return n == 0 ? 0 : table[n];
    }
};

int main() {
    Solution s;
    s.numDecodings("100");
    return 0;
}