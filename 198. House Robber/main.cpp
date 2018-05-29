#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (!nums.size())
            return 0;

        int max_sum = 0;
        vector<int> dp(nums.size(), 0);
        for (int i = 0; i < dp.size(); i++) {
            dp[i] = nums[i];
            for (int j = 0; j < i - 1; j++) {
                dp[i] = dp[i] > dp[j] + nums[i] ? dp[i] : dp[j] + nums[i];
            }

            max_sum = max_sum > dp[i] ? max_sum : dp[i];
        }

        return max_sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}