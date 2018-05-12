#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;

        for (int i = 0; i < numbers.size() - 1; i++) {
            int t = target - numbers[i];
            int left = i + 1;
            int right = numbers.size() - 1;

            while (left <= right) {
                int mid = (left + right) / 2;
                if (numbers[mid] == t) {
                    res.push_back(i + 1);
                    res.push_back(mid + 1);

                    return res;
                } else if (numbers[mid] < t) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}