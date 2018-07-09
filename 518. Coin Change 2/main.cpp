#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if (amount == 0)
            return 1;

        if (amount < 0 || !coins.size())
            return 0;

        vector<int> dp(amount + 1, 0);
        sort(coins.begin(), coins.end());
        for (int i = 0; i < amount + 1; ++i) {
            if (i % coins[0] == 0)
                dp[i] = 1;
        }

        for (int i = 1; i < coins.size(); ++i) {
            for (int j = coins[i]; j < amount + 1; ++j) {
                dp[j] = dp[j] + dp[j - coins[i]];
            }
        }
        return dp[amount];
    }
};

int main() {
    return 0;
}