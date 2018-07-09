#include <iostream>
using namespace std;

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if (!s.size())
            return 0;

        int dp[s.size()][s.size()] = {0};
        for (int i = 0; i < s.size(); ++i)
            dp[i][i] = 1;


        for (int i = 1; i < s.size(); i++) {
            for (int j = 0; j < s.size() - i; ++j) {
                if (s[j] == s[i + j])
                    dp[j][i + j] = dp[j + 1][i + j - 1] + 2;
                else
                    dp[j][i + j] = max(dp[j + 1][i + j], dp[j][i + j - 1]);
            }
        }

        return dp[0][s.size() - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}