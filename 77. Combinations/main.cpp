#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        if (n >= 1 && k >= 0) {
            vector<int> tmp;
            solve(res, tmp, n, k, 1);
        }
        return res;
    }

    void solve(vector<vector<int>>& res, vector<int>& tmp, int n, int k, int start) {
        if (tmp.size() == k) {
            res.push_back(tmp);
            return;
        }

        for (int i = start; i <= n; i++) {
            tmp.push_back(i);
            solve(res, tmp, n, k, i + 1);
            tmp.pop_back();
        }
    }
};

int main() {
    Solution s;
    s.combine(4, 2);
    return 0;
}