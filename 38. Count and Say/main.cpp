#include <iostream>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string res[n+1];
        res[0] = res[1] = "1";
        if (n > 1) {
            for (int i = 2; i < n + 1; i++) {
                string last = res[i - 1];
                string tmp = "";
                int count = 0;
                char c;
                for (int j = 0; j < last.size(); j++) {
                    if (count == 0) {
                        c = last[j];
                        count++;
                        continue;
                    }

                    if (last[j] == c) {
                        count++;
                    } else {
                        tmp = tmp + to_string(count) + c;
                        c = last[j];
                        count = 1;
                    }
                }
                tmp = tmp + to_string(count) + c;
                res[i] = tmp;
            }
        }
        return res[n];
    }
};

int main() {
    Solution s;
    cout << s.countAndSay(1) << endl;
    cout << s.countAndSay(2) << endl;
    cout << s.countAndSay(3) << endl;
    cout << s.countAndSay(4) << endl;
    cout << s.countAndSay(10) << endl;
    return 0;
}