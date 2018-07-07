#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int, int> dict;
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < B.size(); j++) {
                ++dict[A[i] + B[j]];
            }
        }

        int res = 0;
        for (int i = 0; i < C.size(); i++) {
            for (int j = 0; j < D.size(); j++) {
                res += dict[- (C[i] + D[j])];
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}