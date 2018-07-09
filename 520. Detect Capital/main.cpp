#include <iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 0)
            return true;

        int small = 0;
        int big = 0;
        for (int i = 1; i < word.size(); i++) {
            if (word[i] >= 65 && word[i] <= 90)
                ++big;
            else
                ++small;
        }

        if (word[0] >= 65 && word[0] <= 90)
            return small == word.size() - 1 || small == 0;
        else
            return small == word.size() - 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}