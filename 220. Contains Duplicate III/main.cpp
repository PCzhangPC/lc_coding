#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<int, int> dict;
        if (k < 0 || t < 0)
            return false;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i - k; j < i; j++) {
                if (j >= 0 && j < nums.size() && abs(long(nums[i]) - long(nums[j])) <= t)
                    return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> vec = {2, 1};
    Solution s;
    s.containsNearbyAlmostDuplicate(vec, 1, 1);
    return 0;
}