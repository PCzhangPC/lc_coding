#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool makesquare(vector<int>& nums) {
        if (nums.size() < 4)
            return false;

        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 4)
            return false;

        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> s(4, 0);
        return dfs(nums, s, 0, sum / 4);
    }

    bool dfs(vector<int>& nums, vector<int>& sum, int index, int target) {
        if (index == nums.size())
            return sum[0] == target && sum[1] == target && sum[2] == target;

        for (int i = 0; i < 4; ++i) {
            sum[i] += nums[index];
            if (sum[i] <= target)
                if (dfs(nums, sum, index + 1, target))
                    return true;
            sum[i] -= nums[index];
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}