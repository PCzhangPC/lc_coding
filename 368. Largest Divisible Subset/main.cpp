#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums;

        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1);
        vector<int> pre(nums.size(), 1);

        int max_size = 1;
        int max_index = 1;
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    pre[i] = j;
                }

                if (dp[i] > max_size) {
                    max_size = dp[i];
                    max_index = i;
                }
            }
        }

        vector<int> res;
        for (int i = 0 ; i < max_size; i++) {
            res.push_back(nums[max_index]);
            max_index = pre[max_index];
        }
        return res;
    }

};

int main() {
    vector<int> vec = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608};
    Solution s;
    vector<int> res = s.largestDivisibleSubset(vec);

    for (int i = 0; i <res.size(); i++)
        cout << res[i] << endl;
    return 0;
}