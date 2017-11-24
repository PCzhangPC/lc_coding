#include <iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x;
        if (x < 0)
            return false;

        long long res = 0;
        while (x > 0) {
            res = res * 10 + x % 10;
            x = x / 10;

            if (res > INT32_MAX || res < INT32_MIN)
                return false;
        }

        return tmp == res;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}