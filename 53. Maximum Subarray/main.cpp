#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int tmp_sum = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (tmp_sum < 0)
                tmp_sum = 0;

            tmp_sum += nums[i];

            if (tmp_sum > max_sum)
                max_sum = tmp_sum;
        }

        return max_sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}