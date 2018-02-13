#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2)
            return 0;

        int max_sum = 0;
        int tmp_sum = 0;
        int start = 0;
        int end = 1;

        while (end < prices.size()) {
            if (prices[end] - prices[start] < 0) {
                start = end;
                end++;
            } else {
                tmp_sum = prices[end] - prices[start];
                if (tmp_sum > max_sum)
                    max_sum = tmp_sum;

                end++;
            }
        }

        return max_sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}