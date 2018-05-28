#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (coins.size() == 0)
            return -1;

        if (amount == 0)
            return 0;

        vector<vector<int>> vec(coins.size(), vector<int>(amount + 1, 0));
        for (int i = 0; i < amount + 1; i++) {
            if (i % coins[0] == 0) {
                vec[0][i] = i / coins[0];
            }
        }

        for (int i = 1; i < coins.size(); i++) {
            for (int j = 0; j < amount + 1; j++) {
                if (j - coins[i] == 0) {
                    vec[i][j] = 1;
                } else if (j - coins[i] > 0) {
                    if (vec[i][j - coins[i]] != 0) {
                        vec[i][j] = min(vec[i][j - coins[i]] + 1, vec[i - 1][j] == 0 ? INT32_MAX : vec[i - 1][j]);
                    } else {
                        vec[i][j] = vec[i - 1][j];
                    }
                } else {
                    vec[i][j] = vec[i - 1][j];
                }
            }
        }

        return vec[coins.size() - 1][amount] == 0 ? -1 : vec[coins.size() - 1][amount];
    }
};

int main() {
    vector<int> vec = {2, 1};
    Solution s;
    s.coinChange(vec, 3);
    return 0;
}