#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows > 0) {
            int cols = matrix[0].size();
            if (cols > 0) {
                for (int i = 0; i < rows; i++) {
                    if (matrix[i][0] <= target && matrix[i][cols - 1] >= target) {
                        int low = 0;
                        int high = cols - 1;

                        while (low <= high) {
                            int mid = (low + high) / 2;
                            if (matrix[i][mid] == target)
                                return true;
                            else if (matrix[i][mid] < target)
                                low = mid + 1;
                            else
                                high = mid -1;
                        }
                        return false;
                    }
                }
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}