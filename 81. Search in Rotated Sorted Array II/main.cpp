#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        return solve(nums, target, 0, nums.size() - 1);
    }

    bool solve(vector<int>& nums, int target, int low, int high) {
        if (low > high)
            return false;

        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return true;

        if (nums[low] < nums[mid]) {     //// low - mid 有序
            if (nums[low] <= target && nums[mid - 1] >= target)
                return solve(nums, target, low, mid - 1);
            else
                return solve(nums, target, mid + 1, high);
        } else if (nums[low] > nums[mid]) {                          //// mid - high 有序
            if (nums[mid + 1] <= target && nums[high] >= target)
                return solve(nums, target, mid + 1, high);
            else
                return solve(nums, target, low, mid - 1);
        } else {
            return solve(nums, target, low, mid - 1) || solve(nums, target, mid + 1, high);
        }
    }
};

int main() {
    vector<int> vec = {};
    Solution s;
    cout << s.search(vec, 5) << endl;
    return 0;
}