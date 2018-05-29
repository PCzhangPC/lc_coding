#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (!nums.size())
            return 0;
        if (nums.size() == 1)
            return nums[0];

        return max(divrob(nums, 0, nums.size() - 2), divrob(nums, 1, nums.size() - 1));
    }

    int divrob(vector<int>& nums, int start, int end) {
        if (end - start + 1 == 0)
            return 0;

        int max_sum = 0;
        vector<int> dp(end - start + 1, 0);
        for (int i = start; i <= end; i++) {
            dp[i - start] = nums[i];
            for (int j = start; j < i - 1; j++) {
                dp[i - start] = dp[i - start] > dp[j - start] + nums[i] ? dp[i - start] : dp[j - start] + nums[i];
            }

            max_sum = max_sum > dp[i - start] ? max_sum : dp[i - start];
        }

        return max_sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}