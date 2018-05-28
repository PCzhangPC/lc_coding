#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (!nums.size())
            return 0;

        vector<int> res(nums.size(), 1);
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] && res[i] < res[j] + 1)
                    res[i] = res[j] + 1;
            }
            max = max > res[i] ? max : res[i];
        }

        return max;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}