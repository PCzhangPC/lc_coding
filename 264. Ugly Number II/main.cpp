#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long nthUglyNumber(int n) {
        if (n == 1)
            return 1;

        vector<long long> arr2 = {2};
        vector<long long> arr3 = {3};
        vector<long long> arr5 = {5};
        long long res;
        for (int i = 1; i < n; i++) {
            if (arr2[0] < arr3[0] && arr2[0] < arr5[0]) {
                res = arr2[0];
                arr2.erase(arr2.begin());
                arr2.push_back(res * 2);
                arr3.push_back(res * 3);
                arr5.push_back(res * 5);
            } else if (arr3[0] < arr2[0] && arr3[0] < arr5[0]) {
                res = arr3[0];
                arr3.erase(arr3.begin());
                arr3.push_back(res * 3);
                arr5.push_back(res * 5);
            } else if (arr5[0] < arr2[0] && arr5[0] < arr3[0]) {
                res = arr5[0];
                arr5.erase(arr5.begin());
                arr5.push_back(res * 5);
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    std::cout << s.nthUglyNumber(1600) << std::endl;
    return 0;
}