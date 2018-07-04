#include <iostream>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k <= 0)
            return num;

        int len = num.size() - k;
        int start = 0;
        int end = k;
        string res = "";

        while (len > 0) {
            if (end == num.size() - 1 && end - start + 1 == len) {
                res += num.substr(start, len);
                break;
            }

            char min_char = num[start];
            int pos = start;
            for (int i = start; i <= end; i++) {
                if (num[i] < min_char) {
                    min_char = num[i];
                    pos = i;
                }
            }

            res += min_char;
            start = pos + 1;
            end++;
            len--;
        }

        int real_start = 0;
        while (real_start < res.size() && res[real_start] == '0') {
            real_start++;
        }
        res = res.substr(real_start);

        if (res == "")
            return "0";

        return res;
    }
};

int main() {
    string s = "10";
    Solution so;
    cout << so.removeKdigits(s, 1);
    return 0;
}