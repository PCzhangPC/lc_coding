#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        if (sum % 2 == 1)
            return false;

        vector<int> dp(sum / 2 + 1, 0);
        for (int i = 0; i < dp.size(); i++)
            if (i >= nums[0])
                dp[i] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            for (int j = dp.size() - 1; j >= 0; j--) {
                if (j - nums[i] >= 0)
                    dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
        }

        return dp[sum / 2] == sum / 2;
    }
};

//        vector<vector<int>> dp(nums.size(), vector<int>(sum / 2 + 1, 0));
//        for (int i = 0; i < dp[0].size(); i++) {
//            if (i >= nums[0])
//                dp[0][i] = nums[0];
//        }
//
//        for (int i = 1; i < dp.size(); i++) {
//            for (int j = dp[i].size() - 1; j > 0; j--) {
//                if (j - nums[i] >= 0)
//                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - nums[i]] + nums[i]);
//                else
//                    dp[i][j] = dp[i - 1][j];
//            }
//        }
//
//        return dp[nums.size() - 1][sum / 2] == sum / 2;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}