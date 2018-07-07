#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if (points.size() < 1)
            return 0;

        sort(points.begin(), points.end());
        int res = 1;
        int end = points[0].second;

        for (int i = 1; i < points.size(); ++i) {
            if (points[i].first <= end) {
                if (points[i].second < end)
                    end = points[i].second;
            } else {
                ++res;
                end = points[i].second;
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}