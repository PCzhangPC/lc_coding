#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() > 0) {
            int max_arrive = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (i + nums[i] > max_arrive)
                    max_arrive = i + nums[i];
                if (max_arrive >= nums.size() - 1)
                    return true;

                if (i == max_arrive)
                    break;
            }
            return false;
        }
    }
};

int main() {
    vector<int> vec = {3,0,8,2,0,0,1};
    Solution s;
    cout << s.canJump(vec) << endl;
    return 0;
}