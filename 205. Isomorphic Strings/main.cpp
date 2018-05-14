#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        bool flag = true;
        map<char, char> dict1;
        map<char, char> dict2;
        for (int i = 0; i < s.size(); i++) {
            if (dict1.count(s[i]) == 0) {
                dict1[s[i]] = t[i];
            } else {
                if (dict1[s[i]] != t[i]) {
                    flag = false;
                    break;
                }
            }

            if (dict2.count(t[i]) == 0) {
                dict2[t[i]] = s[i];
            } else {
                if (dict2[t[i]] != s[i]) {
                    flag = false;
                    break;
                }
            }
        }

        return flag;
    }
};

int main() {
    Solution s;
    s.isIsomorphic("ab", "aa");
    return 0;
}