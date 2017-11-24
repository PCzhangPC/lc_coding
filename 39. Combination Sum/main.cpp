#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;

        vector<int> tmp;
        if (candidates.size() > 0)
            solve(res, candidates, tmp, target, 0);

        return res;
    }

    void solve(vector<vector<int>> &res, vector<int> &candidates, vector<int> tmp, int target, int start) {
        if (target < 0)
            return;
        if (target == 0) {
            res.push_back(tmp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            tmp.push_back(candidates[i]);
            solve(res, candidates, tmp, target - candidates[i], i);
            tmp.pop_back();
        }
    }
};

int main() {
    vector<int> vec = {2, 3, 6, 7};
    Solution s;
    s.combinationSum(vec, 7);
    return 0;
}