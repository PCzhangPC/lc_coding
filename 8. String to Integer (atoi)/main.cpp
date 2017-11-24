#include <iostream>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        bool rmwsp = false;
        int count = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                count++;
                rmwsp = true;
            } else
                break;
        }

        if (rmwsp)
            str = str.substr(count, str.size() - count);


        bool flag = true;
        if (str[0] == '+' || str[0] == '-') {
            flag = str[0] == '+';
            str = str.substr(1, str.size() - 1);
        }

        if (str == "")
            return 0;

        long long res = 0;
        for (int i = 0; i < str.size(); i++) {
            if ('0' <= str[i] && str[i] <= '9' ) {
                res = res * 10 + (flag ? 1 : -1) * (str[i] - '0');
                if (res < INT32_MIN) {
                    return INT32_MIN;

                }
                if (res > INT32_MAX) {
                    return  INT32_MAX;
                }

            }
            else
                break;
        }

        return res;
    }
};

int main() {
    string str = "9223372036854775807";
    Solution s;
    cout << s.myAtoi(str) << endl;
    return 0;
}