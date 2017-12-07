#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        sort(nums.begin(), nums.end());

        solve(res, tmp, nums, 0);
        return res;
    }

    void solve(vector<vector<int>>& res, vector<int>& tmp, vector<int>& nums, int start) {
        res.push_back(tmp);

        for (int i = start; i < nums.size(); i++) {
            if (i == start || nums[i] != nums[i - 1]) {
                tmp.push_back(nums[i]);
                solve(res, tmp, nums, i + 1);
                tmp.pop_back();
            } else {
                continue;
            }
        }
    };
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}