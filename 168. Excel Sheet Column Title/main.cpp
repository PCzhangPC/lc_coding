#include <iostream>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";

        while (n > 0) {
            int tmp = n % 26;
            char c;
            if (tmp == 0)
                tmp = 26;

            c = tmp + 64;

            n = (n - tmp) / 26;
            res = c + res;
        }

        return res;
    }
};

int main() {
    return 0;
}