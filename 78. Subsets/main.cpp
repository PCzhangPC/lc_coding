#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;

        solve(nums, res, tmp, 0);
        return res;
    }

    void solve(vector<int>& nums, vector<vector<int>>& res, vector<int> tmp, int start) {
        res.push_back(tmp);

        for (int i = start; i < nums.size(); i++) {
            tmp.push_back(nums[i]);
            solve(nums, res, tmp, i + 1);
            tmp.pop_back();
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}