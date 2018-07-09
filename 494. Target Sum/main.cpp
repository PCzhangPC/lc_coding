#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum < S || (sum + S) & 1)
            return 0;

        int target = (sum + S) >> 1;
        int *dp = new int[target + 1]();
        dp[0] = 1;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = target; j >= nums[i]; --j) {
                dp[j] += dp[j - nums[i]];
            }
        }
        return dp[target];
    }
};


int main() {
    vector<int> vec = {1,2,7,9,981};
    Solution s;
    cout << s.findTargetSumWays(vec, 1000000000);
    return 0;
}