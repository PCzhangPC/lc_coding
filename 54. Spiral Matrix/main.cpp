#include <iostream>
#include <vector>
using namespace std;

enum go_direct{
    right = 0,
    down,
    left,
    up
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        const int M = matrix.size();

        if (M != 0)
            const int N = matrix[0].size();

        vector<int> res;
        enum go_direct dir = right;
        //go(matrix, )
    }

    void go(vector<vector<int>> &matrix, vector<int> res, int start_x, int start_y, int direct, int end) {
        res.push_back(matrix[start_x][start_y]);

        if (direct == right) {
            if (start_x == end - 1)
                go(matrix, res, start_x + 1, start_y, right, end);
            go(matrix, res, start_x)
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}