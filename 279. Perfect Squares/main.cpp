#include <iostream>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        int res[n + 1];
        for (int i = 0; i <= n; i++)
            res[i] = i;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j * j <= i; j++) {
                res[i] = min(res[i], res[i - j * j] + 1);
            }
        }

        return res[n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}