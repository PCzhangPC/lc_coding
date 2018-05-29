#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int small = INT32_MAX, big = INT32_MAX;
        for(auto val: nums)
        {
            if(val <= small) small = val;
            else if(val <= big) big = val; // big被更新过就说明一定已经组成了一个长度为2 的增长序列
            else return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}