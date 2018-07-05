#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        map<int, int> dict;
        for (int i = 0; i < intervals.size(); i++)
            dict[intervals[i].start] = i;

        vector<int> res;
        for (int i = 0; i < intervals.size(); i++) {
            map<int, int>::iterator it = dict.lower_bound(intervals[i].end);
            if (it == dict.end())
                res.push_back(-1);
            else
                res.push_back(it->second);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}