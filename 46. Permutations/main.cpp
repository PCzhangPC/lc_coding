#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;

        if (!nums.empty()) {
            solve(res, nums, 0);
        }

        return  res;
    }

    void solve (vector<vector<int>> &res, vector<int>& nums, int start) {
        if (start == nums.size()-1) {
            res.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            swap (start, i, nums);
            solve(res, nums, start + 1);
            swap(start, i, nums);
        }

    }

    void swap (int a, int b, vector<int> &nums) {
        if (a == b)
            return;

        int tmp = nums[a];
        nums[a] = nums[b];
        nums[b] = tmp;
    }
};

int main() {
    vector<int> nums = {1,2,3};
    Solution s;

    vector<vector<int>> res = s.permute(nums);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0 ;j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}