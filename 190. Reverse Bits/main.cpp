#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> vec;

        for (int i = 0; i < 32; i++) {
            vec.push_back(n & 1);
            n >>= 1;
        }

        int res = 0;
        long mask_tru = 1;
        long mask_fal = 0;
        for (int i = 0; i < vec.size(); i++) {
            int tmp = vec[i];
            res <<= 1;
            if (tmp)
                res = res | mask_tru;
            else
                res = res | mask_fal;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}