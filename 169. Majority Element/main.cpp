#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val = nums[0];
        int times = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == val)
                times++;
            else {
                times--;

                if (times == 0) {
                    val = nums[i];
                    times++;
                }
            }
        }

        return val;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}