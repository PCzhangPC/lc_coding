#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator p = nums.begin();

        int count = 0;
        while (p != nums.end()) {
            if (p == nums.begin() || *p != *(p - 1)) {
                count = 1;
                p++;
            } else {
                if (count <= 1 ) {
                    count++;
                    p++;
                } else {
                    nums.erase(p);
                }
            }
        }

        return nums.size();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}