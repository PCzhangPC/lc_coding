#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        fold_diagonally(matrix);
        fold_verticle(matrix);
    }

    void fold_diagonally(vector<vector<int>> &matrix) {
        const int ROWS = matrix.size();
        const  int COLS = ROWS;

        if (ROWS == 0)
            return;

        for (int i = 0; i < ROWS; i++) {
            for (int j = i + 1; j < COLS; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }

    }

    void fold_verticle(vector<vector<int>> &matrix) {
        const int ROWS = matrix.size();
        const  int COLS = ROWS;

        if (ROWS == 0)
            return;

        double mid = (double)(COLS-1)/2;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j <= mid; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][mid + mid - j];
                matrix[i][mid + mid - j] = tmp;
            }
        }
    }
};

int main() {
    vector<vector<int>> vec = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    Solution s;
    s.fold_diagonally(vec);

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    s.fold_verticle(vec);

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}