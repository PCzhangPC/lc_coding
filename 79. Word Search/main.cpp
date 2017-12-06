#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() == 0)
            return false;

        int rows = board.size();
        if (rows > 0) {
            int cols = board[0].size();
            vector<vector<int>> pass_board(rows, vector<int>(cols, 0));

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (board[i][j] == word[0]) {
                        pass_board[i][j] = 1;
                        bool res = solve(board, word, 1, pass_board, i, j);

                        if (res)
                            return true;
                        pass_board[i][j] = 0;
                    }
                }
            }
        }
        return false;
    }

    bool solve(vector<vector<char>>& board, string word, int index, vector<vector<int>>& pass_board, int x, int y) {
        if (index == word.size())
            return true;

        if (x - 1 >= 0 && board[x - 1][y] == word[index] && pass_board[x - 1][y] == 0) {
            pass_board[x - 1][y] = 1;
            bool res = solve(board, word, index + 1, pass_board, x - 1, y);
            if (res)
                return true;
            pass_board[x - 1][y] = 0;
        }

        if (x + 1 < board.size() && board[x + 1][y] == word[index] && pass_board[x + 1][y] == 0) {
            pass_board[x + 1][y] = 1;
            bool res = solve(board, word, index + 1, pass_board, x + 1, y);
            if (res)
                return true;
            pass_board[x + 1][y] = 0;
        }

        if (y - 1 >= 0 && board[x][y - 1] == word[index] && pass_board[x][y - 1] == 0) {
            pass_board[x][y - 1] = 1;
            bool res = solve(board, word, index + 1, pass_board, x, y - 1);
            if (res)
                return true;
            pass_board[x][y - 1] = 0;
        }

        if (y + 1 < board[0].size() && board[x][y + 1] == word[index] && pass_board[x][y + 1] == 0) {
            pass_board[x][y + 1] = 1;
            bool res = solve(board, word, index + 1, pass_board, x, y + 1);
            if (res)
                return true;
            pass_board[x][y + 1] = 0;
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}