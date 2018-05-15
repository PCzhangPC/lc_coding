#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if (k <= 0 || k > nums.size())
            return -1;

        int start = 0;
        int end = nums.size() - 1;
        int index = partition(nums, start, end);
        k = nums.size() - k + 1;

        while (index != k - 1) {
            if (index < k - 1)
                start = index + 1;
            else
                end = index - 1;

            index = partition(nums, start, end);
        }

        return nums[k - 1];

    }

    int partition(vector<int>& nums, int start, int end) {
        int index = start + rand() % (end - start + 1);
        swap(nums, index, end);

        int small_pos = start - 1;
        for (index = start; index < end; index++) {
            if (nums[index] < nums[end]) {
                small_pos++;
                swap(nums, small_pos, index);
            }
        }

        small_pos++;
        swap(nums, small_pos, end);
        return small_pos;
    }

    void swap(vector<int>& nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}