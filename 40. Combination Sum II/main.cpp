#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        if (!candidates.empty()) {
            sort(candidates.begin(), candidates.end());
            vector<int> tmp;
            solve(candidates, tmp, res, 0, target);
        }

        return res;
    }

    void solve(vector<int>& candidates, vector<int>& tmp, vector<vector<int>>& res, int start, int target) {
        if (target == 0) {
            res.push_back(tmp);
            return;
        }

        if (target < 0)
            return;

        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            tmp.push_back(candidates[i]);
            solve(candidates, tmp, res, i + 1, target - candidates[i]);
            tmp.pop_back();
        }
    }
};

int main() {
    vector<int> candidate = {10,1,2,7,6,1,5};
    int target = 8;
    Solution s;
    vector<vector<int>> res = s.combinationSum2(candidate, target);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}