#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int flag = 1;
        if (x < 0) {
            flag = -1;
            x = -x;
        }

        long long res = 0;
        while (x > 0) {
            res = res * 10 + flag * (x % 10);
            x = x / 10;

            if (res > INT32_MAX || res < INT32_MIN)
                return 0;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}