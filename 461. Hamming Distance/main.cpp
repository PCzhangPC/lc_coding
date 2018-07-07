#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x ^ y;
        int mask = 1;
        int rt = 0;

        for (int i = 0; i < 32; i++) {
            if (res & mask)
                rt++;
            mask <<= 1;
        }
        return rt;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}