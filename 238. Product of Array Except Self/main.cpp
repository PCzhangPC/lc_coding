#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero_count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zero_count++;
            else
                product *= nums[i];
        }

        if (zero_count > 1)
            return vector<int>(nums.size(), 0);

        vector<int> res;
        if (zero_count == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    res.push_back(product);
                else
                    res.push_back(0);
            }
            return res;
        }

        product = 1;
        for (int i = 1; i < nums.size(); i++) {
            product *= nums[i];
        }
        res.push_back(product);

        for (int i = 1; i < nums.size(); i++) {
            product = product / nums[i] * nums[i - 1];
            res.push_back(product);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}