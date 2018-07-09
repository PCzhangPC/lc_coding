#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        dfs(nums, res, tmp, 0, -101);
        return res;
    }

    void dfs(vector<int> &nums, vector<vector<int>> &res, vector<int> tmp, int start, int lastval) {
        if (tmp.size() >= 2)
            res.push_back(tmp);

        set<int> set1;
        for (int i = start; i < nums.size(); i++) {
            if (set1.find(nums[i]) == set1.end()) {
                if (nums[i] >= lastval) {
                    tmp.push_back(nums[i]);
                    dfs(nums, res, tmp, i + 1, nums[i]);
                    set1.insert(nums[i]);
                    tmp.pop_back();
                }
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}