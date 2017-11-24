#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return check_cols(board) && check_rows(board) && check_subboard(board);
    }

    bool check_rows(vector<vector<char>>& board) {
        const int ROW = 9;
        const int COL = 9;

        for (int i = 0; i < ROW; i++) {
            vector<char> vec;
            for (int j = 0; j < COL; j++) {
                if (board[i][j] != '.') {
                    for (int k = 0; k < vec.size(); k++) {
                        if (vec[k] == board[i][j])
                            return false;
                    }
                    vec.push_back(board[i][j]);
                }
            }
        }
        return true;
    }

    bool check_cols(vector<vector<char>>& board) {
        const int ROW = 9;
        const int COL = 9;

        for (int j = 0; j < ROW; j++) {
            vector<char> vec;
            for (int i = 0; i < COL; i++) {
                if (board[i][j] != '.') {
                    for (int k = 0; k < vec.size(); k++) {
                        if (vec[k] == board[i][j])
                            return false;
                    }
                    vec.push_back(board[i][j]);
                }
            }
        }
        return true;
    }

    bool check_subboard(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                bool flag = check(board, i, j);
                if (!flag)
                    return false;
            }
        }
        return true;
    }

    bool check(vector<vector<char>>& board, int x, int y) {
        vector<char> vec;
        for (int i = x; i < x + 3; i++) {
            for (int j = y; j < y + 3; j++) {
                char tmp = board[i][j];
                if (board[i][j] != '.') {
                    for (int k = 0; k < vec.size(); k++) {
                        if (vec[k] == board[i][j])
                            return false;
                    }
                    vec.push_back(board[i][j]);
                }
            }
        }
        return true;
    }
};

int main() {
    vector<vector<char>> vec = {{'.','.','.','.','5','.','.','1','.'},{'.','4','.','3','.','.','.','.','.'},{'.','.','.','.','.','3','.','.','1'},{'.','.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.','.'}};
    Solution s;
    cout << s.isValidSudoku(vec) << endl;
    return 0;
}