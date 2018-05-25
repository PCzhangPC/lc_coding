#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = nums[0];
        int fast = nums[nums[0]];

        while (nums[low] != nums[fast]) {
            low = nums[low];
            fast = nums[nums[fast]];
        }

        fast = 0;
        while (low != fast) {
            low = nums[low];
            fast = nums[fast];
        }
        return low;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}