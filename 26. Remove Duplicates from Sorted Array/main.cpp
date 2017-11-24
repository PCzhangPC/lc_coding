#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator p1 = nums.begin();
        if (p1 == nums.end())
            return 0;

        vector<int>::iterator p2 = p1 + 1;
        while (p2 != nums.end()) {
            if (*p2 == *p1)
                nums.erase(p2);
            else {
                p1 = p2;
                p2 = p2 + 1;
            }
        }
        return nums.size();
    }
};

int main() {
    vector<int> vec;
    vec.push_back(1);
    return 0;
}