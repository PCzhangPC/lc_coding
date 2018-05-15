#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set1;

        for (int i = 0; i < nums.size(); i++) {
            if (set1.find(nums[i]) == set1.end())
                set1.insert(nums[i]);
            else
                return true;
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}