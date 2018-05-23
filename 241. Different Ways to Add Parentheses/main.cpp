#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> res;

        bool has_op = false;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '+' || input[i] == '-' || input[i] == '*') {
                has_op = true;
                vector<int> left = diffWaysToCompute(input.substr(0, i));
                vector<int> right = diffWaysToCompute(input.substr(i+1, input.size() - i - 1));

                for (int x = 0; x < left.size(); x++) {
                    for (int y = 0; y < right.size(); y++) {
                        int val;
                        switch (input[i]) {
                            case '+':
                                val = left[x] + right[y];
                                break;
                            case '-':
                                val = left[x] - right[y];
                                break;
                            case '*':
                                val = left[x] * right[y];
                                break;
                        }
                        res.push_back(val);
                    }
                }
            }
        }

        if (!has_op) {
            res.push_back(atoi(input.c_str()));
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}