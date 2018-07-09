#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
            return 1;

        bool flag = false;
        unsigned int mask = 0x80000000;
        for (int i = 0; i < 32; i++) {
            if ((num & mask) > 0) //位运算优先级低
                flag = 1;

            if (flag)
                num ^= mask;
            mask >>= 1;
        }
        return num;
    }
};

int main() {
    Solution s;
    cout << s.findComplement(2);
    return 0;
}