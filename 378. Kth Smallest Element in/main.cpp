#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        if (n == 0)
            return -1;

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (pq.size() < k)
                    pq.push(matrix[i][j]);
                else {
                    if (matrix[i][j] < pq.top()) {
                        pq.push(matrix[i][j]);
                        pq.pop();
                    } else {
                        break;
                    }
                }
            }
        }

        return pq.top();
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}