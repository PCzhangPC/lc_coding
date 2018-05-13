#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(const int s1, const int s2) {
    string str1 = to_string(s1) + to_string(s2);
    string str2 = to_string(s2) + to_string(s1);

    return str1 > str2;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        if (nums[0] == 0)
            return "0";

        string res = "";
        for (int i = 0; i < nums.size(); i++) {
            res += to_string(nums[i]);
        }
        return res;
    }
};

int main() {
    vector<int> vec = {41,23,87,55,50,53,18,9,39,63,35,33,54,25,26,49,74,61,32,81,97,99,38,96,22,95,35,57,80,80,16,22,17,13,89,11,75,98,57,81,69,8,10,85,13,49,66,94,80,25,13,85,55,12,87,50,28,96,80,43,10,24,88,52,16,92,61,28,26,78,28,28,16,1,56,31,47,85,27,30,85,2,30,51,84,50,3,14,97,9,91,90,63,90,92,89,76,76,67,55};

    Solution s;
    std::cout << "res  " << s.largestNumber(vec) << std::endl;
    return 0;
}