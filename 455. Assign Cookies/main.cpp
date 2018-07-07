#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ig = 0;
        int is = 0;

        while (ig < g.size() && is < s.size()) {
            if (g[ig] <= s[is]) {
                ++res;
                ++ig;
                ++is;
            } else {
                ++is;
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}