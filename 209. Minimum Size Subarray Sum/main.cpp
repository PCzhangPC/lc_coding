#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if (!nums.size())
            return 0;

        int globe_length = INT32_MAX;
        int start = 0;
        int end = 0;
        int sum = nums[0];

        while (true) {
            if (sum < s) {
                end++;
                if (end >= nums.size())
                    break;
                sum += nums[end];
            } else {
                int local_len = end - start + 1;
                if (local_len < globe_length)
                    globe_length = local_len;

                start++;
                if (start > end)
                    break;
                sum -= nums[start - 1];
            }
        }

        if (globe_length == INT32_MAX)
            return 0;
        return globe_length;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}