#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.size()) {
            vector<vector<int>> res;
            vector<int> tmp = {triangle[0][0]};
            res.push_back(tmp);

            for (int i = 1; i < triangle.size(); i++) {
                vector<int> a;
                int length = triangle[i].size();

                a.push_back((*res.rbegin())[0] + triangle[i][0]);
                for (int j = 1; j < length - 1; j++) {
                    a.push_back(triangle[i][j] + min((*res.rbegin())[j - 1], (*res.rbegin())[j]));
                }
                a.push_back((*res.rbegin())[length - 2] + triangle[i][length - 1]);

                res.push_back(a);
            }

            int leng = res.size();
            int min = res[leng - 1][0];
            for (int i = 0; i < res.rbegin()->size(); i++) {
                if (res[leng - 1][i] < min)
                    min = res[leng - 1][i];
            }
            return min;
        }

        return 0;
    }
};

int main() {
    Solution s;
    vector<vector<int>> que = {{-1}, {-2, -3}};
    cout << s.minimumTotal(que);
    return 0;
}