#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if (nums.size() < 2)
            return vector<int>();
        if (nums.size() == 2)
            return nums;

        int all = 0;
        for (int i = 0; i < nums.size(); i++) {
            all ^= nums[i];
        }

        int flag = 0x01;
        while (true) {
            if (flag & all)
                break;
            flag <<= 1;
        }

        int res1 = 0;
        int res2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] & flag)
                res1 ^= nums[i];
            else
                res2 ^= nums[i];
        }

        vector<int> res;
        res.push_back(res1);
        res.push_back(res2);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}