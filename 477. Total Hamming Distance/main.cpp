#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if ((nums[j] >> i) & 1)
                    ++count;
            }
            res += count * (nums.size() - count);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}