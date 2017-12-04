#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int tmp;
            if (i == digits.size() - 1) {
                tmp = digits[i] + 1;
            } else {
                tmp = digits[i] + flag;
            }

            digits[i] = tmp % 10;
            flag = tmp / 10;
        }

        if (flag)
            digits.insert(digits.begin(), flag);

        return digits;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}