#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0)
            return "";

        int maxlen = 0;
        string substr = "";
        for (int i = 0; i < s.size(); i++) {
            int j = i;
            int k = i;
            int tmplen = -1;

            while (j >= 0 && k < s.size() && s[j] == s[k]) {
                tmplen += 2;
                j--;
                k++;
            }

            if (tmplen > maxlen) {
                substr = s.substr(j + 1, tmplen);
                maxlen = tmplen;
            }
        }

        for (int i = 0, j = i+1; i < s.size() && j < s.size(); i++, j++) {
            int m = i;
            int n = j;
            int tmplen = 0;

            while (m >= 0 && n < s.size() && s[m] == s[n]) {
                tmplen += 2;
                m--;
                n++;
            }

            if (tmplen > maxlen) {
                substr = s.substr(m + 1, tmplen);
                maxlen = tmplen;
            }
        }

        return substr;
    }
};

int main() {
    string str = "cbbbbd";
    Solution s;
    cout << s.longestPalindrome(str) << endl;
    return 0;
}