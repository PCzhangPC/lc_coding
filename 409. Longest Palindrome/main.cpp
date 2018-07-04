#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> dict;
        for (int i = 0; i < s.size(); i++) {
            if (dict.find(s[i]) == dict.end())
                dict[s[i]] = 1;
            else
                dict[s[i]]++;
        }

        int sumlen = 0;
        int odd_count = 0;
        for (map<char, int>::iterator it = dict.begin(); it != dict.end(); it++) {
            sumlen += it->second;
            if (it->second % 2 != 0)
                odd_count++;
        }

        if (odd_count == 0)
            return sumlen;

        return sumlen - odd_count + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}