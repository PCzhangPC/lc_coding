#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p1, p2, p3;
        p1 = p2 = p3 = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                move_right(nums, p3, 2);
                move_right(nums, p2, 1);
                move_right(nums, p1, 0);
            } else if (nums[i] == 1) {
                move_right(nums, p3, 2);
                move_right(nums, p2, 1);
            } else {
                move_right(nums, p3, 2);
            }
        }
    }

    void move_right(vector<int>& nums, int &p, int val) {
        p++;
        nums[p] = val;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}