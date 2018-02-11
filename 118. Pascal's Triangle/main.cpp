#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows >= 1) {
            res.push_back({1});
        }

        if (numRows > 1) {
            for (int i = 2; i <= numRows; i++) {
                vector<int> tmp;
                tmp.push_back(1);

                int last_length = res[i - 2].size();
                for (int j = 0; j < last_length - 1; j++) {
                    tmp.push_back(res[i - 2][j] + res[i - 2][j + 1]);
                }
                tmp.push_back(1);
                res.push_back(tmp);
            }
        }

        return res;
    }
};

int main() {
    Solution s;
    s.generate(3);
    return 0;
}