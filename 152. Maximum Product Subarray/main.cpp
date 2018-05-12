#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        if (!nums.size())
            return 0;

        int max_val = nums[0];
        int max_tmp = max_val;
        int min_tmp = max_val;

        for (int i = 1; i < nums.size(); i++) {
            int copy = max_tmp;
            max_tmp = max(max(max_tmp * nums[i], min_tmp * nums[i]), nums[i]);
            min_tmp = min(min(copy * nums[i], min_tmp * nums[i]), nums[i]);

            if (max_tmp > max_val)
                max_val = max_tmp;
        }

        return max_val;
    }
};


int main() {
    vector<int> vec = {-4,-3,-2};
    Solution s;
    cout << s.maxProduct(vec);
    return 0;
}