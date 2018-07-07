#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if (!nums.size())
            return 0;

        sort(nums.begin(), nums.end());
        int target = nums[nums.size() / 2];
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
            res += abs(nums[i] - target);

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}