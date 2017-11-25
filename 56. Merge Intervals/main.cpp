#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

bool compare(Interval in1, Interval in2) {
    return in1.start < in2.start;
}

class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        vector<Interval> res;

        for (int i = 0; i < intervals.size(); i++) {
            if (i == 0) {
                res.push_back(intervals[i]);
            } else {

                int last = res.size() - 1;
                if (intervals[i].start >= res[last].start && intervals[i].start <= res[last].end) {
                    if (intervals[i].end > res[last].end)
                        res[last].end = intervals[i].end;
                } else {
                    res.push_back(intervals[i]);
                }
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}