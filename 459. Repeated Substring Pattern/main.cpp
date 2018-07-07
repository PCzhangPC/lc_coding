#include <iostream>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int i = 1; i <= s.size() / 2; i++) {
            if (s.size() % i == 0) {
                string sub = s.substr(0, i);
                string tmp = "";
                int count = s.size() / i;
                for (int j = 0; j < count; j++)
                    tmp += sub;

                if (tmp == s)
                    return true;
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}