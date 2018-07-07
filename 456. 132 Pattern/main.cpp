#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size() < 3)
            return false;

        vector<pair<int, int>> vec;
        for (int i =0; i < nums.size(); i++) {
            vec.push_back(pair<int, int>(nums[i], i));
        }

        sort(vec.begin(), vec.end());

        for (int i = 1; i < vec.size() - 1; i++) {
            int t_idx = 0;
            int min_idx = vec[0].second;
            for (int j = 1; j < i; j++) {
                if (vec[j].first < vec[i].first && vec[j].second < vec[t_idx].second) {
                    t_idx = j;
                    min_idx = vec[t_idx].second;
                }
            }

            if (vec[t_idx].first < vec[i].first)
                for (int j = i + 1; j < vec.size(); j++) {
                    if (vec[j].first > vec[i].first && vec[j].second < vec[i].second && vec[j].second > min_idx)
                        return true;
                }
        }
        return false;
    }
};

int main() {
    vector<int> vec = {2,1,3,2};
    Solution s;
    s.find132pattern(vec);
    return 0;
}