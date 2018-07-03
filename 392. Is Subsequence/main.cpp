#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            bool flag = false;
            for (; j < t.size(); j++) {
                if (s[i] == t[j]) {
                    flag = true;
                    j++;
                    break;
                }
            }

            if (!flag)
                return false;
        }
        return true;
    }
};

int main() {
    string s1 = "axc";
    string s2 = "ahbgdc";
    Solution s;
    s.isSubsequence(s1, s2);

    return 0;
}

