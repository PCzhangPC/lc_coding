#include <iostream>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        int index = 0;
        return decode_help(s, index);
    }

    string decode_help(string &s, int &index) {
        string res = "";
        int times = 0;

        while (index < s.size()) {
            if (s[index] >= 48 && s[index] <= 57) {
                times = times * 10 + s[index] - 48;
                ++index;
            } else if ((s[index] >= 97 && s[index] <= 122) || (s[index] >= 65 && s[index] <= 90)) {
                res += s[index];
                ++index;
            } else if (s[index] == '[') {
                string ss = decode_help(s, ++index);
                if (times == 0)
                    res += ss;
                else
                    for (int i = 0; i < times; i++) {
                        res += ss;
                    }
                times = 0;
            } else if (s[index] == ']') {
                ++index;
                return res;
            }
        }

        return res;
    }
};

int main() {
    string st = "3[a]2[b4[F]c]";
    Solution s;
    s.decodeString(st);
    return 0;
}