#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator p = nums.begin();
        while (p != nums.end())
            if (*p == val)
                nums.erase(p);
            else
                p++;

        return  nums.size();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}