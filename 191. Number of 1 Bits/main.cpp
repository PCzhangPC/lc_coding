#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (n) {
            if (n & 1)
                res++;
            n = n >> 2;
        }
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}