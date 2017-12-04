#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.size(), len_b = b.size();
        int flag = 0;

        if (len_b > len_a) {
            string tmp = a;
            a = b;
            b = tmp;

            int tp = len_a;
            len_a = len_b;
            len_b = tp;
        }

        int i = len_a - 1;
        int tmp;
        while (i >= 0) {
            if (i >= len_a -len_b)
                tmp = a[i] + b[i - len_a + len_b] + flag - 48 * 2;
            else
                tmp = a[i] + flag - 48;
            a[i] = (char)(tmp % 2 + 48);
            flag = tmp / 2;
            if (i < len_a -len_b && !flag)
                return a;
            i--;
        }

        if (flag)
            a = '1' + a;
        return a;
    }
};

int main() {
    string a = "1", b = "111";
    Solution s;
    cout << s.addBinary(a, b) <<endl;
    return 0;
}