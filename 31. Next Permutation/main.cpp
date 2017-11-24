#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1)
            return;

        int i = nums.size() - 1;
        int j = i - 1;
        while (j >=0 && nums[j] >= nums[i]) {
            j--;
            i--;
        }

        reverse(nums, i);

        if (i == 0)
            return;

        for (int m = i; i < nums.size(); i++) {
            if (nums[i] > nums[j]) {
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
                return;
            }
        }
    }

    void reverse(vector<int>& nums, int start) {
        for (int i = start; i < (start + nums.size())/2; i++) {
            int tmp = nums[nums.size() - 1 - (i - start)];
            nums[nums.size() - 1 - (i - start)] = nums[i];
            nums[i] = tmp;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}