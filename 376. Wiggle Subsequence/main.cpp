#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() < 2)
            return nums.size();

        int local_start = 0;
        int local_end = 1;
        while (nums[local_end] == nums[local_start]) {
            if (local_end == nums.size() - 1)
                return 1;
            else
                local_end++;
        }
        int len = 2;

        for (int i = local_end; i < nums.size() - 1; i++) {
            if ((nums[i + 1] - nums[i]) * (nums[local_end] - nums[local_start]) < 0) {
                len++;
                local_start = i;
                local_end = i + 1;
            } else
                local_end = i + 1;
        }
        return len;
    }
};

int main() {
    vector<int> vec = {1, 1};
    Solution s;
    s.wiggleMaxLength(vec);
    return 0;
}