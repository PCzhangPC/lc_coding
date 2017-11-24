#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay = haystack.size();
        int nee = needle.size();
        if (nee == 0)
            return 0;

        for (int i = 0; i < hay - nee + 1; i++) {
            if (haystack[i] == needle[0]) {
                string tmp = haystack.substr(i, nee);
                if (tmp == needle)
                    return i;
            }
        }
        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}