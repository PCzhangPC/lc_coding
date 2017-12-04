#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a[n + 2];
        a[0] = 0;
        a[1] = 1;

        for (int i = 2; i < n + 2; i++)
            a[i] = a[i - 1] + a[i - 2];

        return a[n + 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}