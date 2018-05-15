#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> nums;
        for (int i = 1; i < 10; i++)
            nums.push_back(i);

        vector<int> tmp;
        solve(nums, res, 0, 8, tmp, k, n);
        return res;
    }

    void solve(vector<int>& nums, vector<vector<int>>& res, int start, int end, vector<int>& tmp, int k, int n) {
        if (tmp.size() == k) {
            int sum = 0;
            for (int i = 0; i < tmp.size(); i++)
                sum += tmp[i];

            if (sum == n)
                res.push_back(tmp);
        }

        if (tmp.size() < k)
            for (int i = start; i <= end; i++) {
                tmp.push_back(nums[i]);
                solve(nums, res, i + 1, end, tmp, k, n);
                tmp.pop_back();
            }
    }
};

int main() {
    Solution s;
    s.combinationSum3(3, 7);
    return 0;
}