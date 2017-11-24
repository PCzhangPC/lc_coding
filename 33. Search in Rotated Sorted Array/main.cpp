#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[low] < nums[mid]) {     //// low - mid 有序
                if (nums[low] <= target && nums[mid - 1] >= target)
                    high = mid - 1;
                else
                    low = mid + 1;

                continue;
            } else {                          //// mid - high 有序
                if (nums[mid + 1] <= target && nums[high] >= target)
                    low = mid + 1;
                else
                    high = mid - 1;

                continue;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> a = {3,1};
    Solution s;
    cout << s.search(a, 1) << endl;
    return 0;
}