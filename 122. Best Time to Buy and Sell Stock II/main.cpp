#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2)
            return 0;

        int start = 0;
        int end = 1;
        int all_sum = 0;
        int local_sum = 0;

        while (end < prices.size()) {
            if (prices[end] < prices[end - 1]) {
                start = end;
                end++;
                all_sum += local_sum;
                local_sum = 0;
            } else {
                local_sum = prices[end] - prices[start];
                end++;
            }
        }
        all_sum += local_sum;
        return all_sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}