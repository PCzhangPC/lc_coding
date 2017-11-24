#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> dic;

        for (int i = 0; i < nums.size(); i++) {
            if (!dic.count(target - nums[i]) && !dic.count(nums[i]))
                dic[nums[i]] = i;
            else if (dic.count(target - nums[i])) {
                res.push_back(dic[target - nums[i]]);
                res.push_back(i);
                break;
            }
        }

        return res;
    }
};

void create_nums(int a[], size_t n, vector<int> &nums)
{
    for (int i = 0; i < n; i++)
        nums.push_back(a[i]);
}

int main() {
    vector<int> nums;
    int a[] = {1, 1, 2, 3};
    int target = 3;
    size_t n = sizeof(a)/sizeof(int);
    create_nums(a, n, nums);

    Solution s;
    vector<int> res;
    res = s.twoSum(nums, target);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;

    return 0;
}