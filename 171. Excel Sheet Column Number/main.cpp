#include <iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            res *= 26;
            res += (s[i] - 64);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}