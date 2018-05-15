#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> dict;

        for (int i = 0; i < nums.size(); i++) {
            if (dict.count(nums[i]) == 0)
                dict[nums[i]] = i;
            else {
                if (i - dict[nums[i]] <= k)
                    return true;
                else
                    dict[nums[i]] = i;
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}