#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for (int i = 0; i < strs.size(); ++i) {
            int *p = count(strs[i]);
            for (int j = m; j >= 0; --j) {
                for (int k = n; k >= 0; --k) {
                    if (j - p[0] >= 0 && k - p[1] >= 0)
                        dp[j][k] = max(dp[j - p[0]][k - p[1]] + 1, dp[j][k]);
                }
            }
        }
        return dp[m][n];
    }

    int* count(string str) {
        int* res = new int[2];
        res[0] = res[1] = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1')
                ++res[1];
            else
                ++res[0];
        }

        return res;
    }
};

int main() {
    vector<string> vec = {"00101011"};
    Solution s;
    cout << s.findMaxForm(vec, 36, 39);
    return 0;
}