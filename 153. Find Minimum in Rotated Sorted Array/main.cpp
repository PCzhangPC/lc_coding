#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int res = low;

        while (nums[low] > nums[high]) {
            int mid = (high + low) / 2;
            if (nums[mid] > nums[high])
                low = mid;

            if (nums[mid] < nums[low]) {
                high = mid;
            }

            if (high - low == 1) {
                res = high;
                break;
            }
        }

        return nums[res];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}