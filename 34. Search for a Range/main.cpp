#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        if (high < 0)
            return {-1, -1};

        vector<int> res;
        while (low < high) {                   // 找开始
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                high = mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (nums[low] != target)
            return {-1, -1};
        else
            res.push_back(low);

        low = 0;
        high = nums.size() - 1;
        while (low < high) {                   // 找结束
            int mid = (low + high + 1) / 2;
            if (nums[mid] == target)
                low = mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        res.push_back(low);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}