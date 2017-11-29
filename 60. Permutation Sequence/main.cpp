#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        string res = "";
        if (n > 0 && k > 0) {
            vector<string> nums;
            int fac = 1;
            for (int i = 1; i <= n; i++) {
                fac *= i;
                nums.push_back(to_string((i)));
            }
            solve(nums, res, fac, k);
        }

        return res;
    }

    void solve(vector<string> &nums, string &res, int fac, int k) {
        if (nums.size() == 0)
            return;

        fac /= nums.size();
        int index = (k - 1) / fac;
        res += nums[index];
        nums.erase(nums.begin() + index);
        solve(nums, res, fac, k - fac * index);
    }
};

int main() {
    Solution s;
    cout << s.getPermutation(3,1) <<endl;
    return 0;
}