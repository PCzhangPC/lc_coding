#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if (n == 1)
            return 1;

        vector<vector<int>> vec(primes.size(), vector<int>());
        for (int i = 0; i < primes.size(); i++) {
            vec[i].push_back(primes[i]);
        }

        int index, min_val;
        for (int i = 1; i < n; i++) {
            find_min(vec, index, min_val);

            vec[index].erase(vec[index].begin());
            for (int j = index; j < vec.size(); j++) {
                vec[j].push_back(min_val * primes[j]);
            }
        }

        return min_val;
    }

    void find_min(vector<vector<int>> &vec, int &min_index, int &min_val) {
        min_index = 0;
        min_val = vec[0][0];
        for (int i = 0 ; i < vec.size(); i++) {
            if (vec[i][0] < min_val) {
                min_index = i;
                min_val = vec[i][0];
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}