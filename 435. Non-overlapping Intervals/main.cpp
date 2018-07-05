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

bool mycomp(Interval &a, Interval &b) {
    return a.start < b.start;
}

class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        if (intervals.size() < 2)
            return 0;

        sort(intervals.begin(), intervals.end(), mycomp);
        int res = 0;
        int last = 0;

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[last].end > intervals[i].start) {
                res++;
                if (intervals[last].end > intervals[i].end)
                    last = i;
            } else
                last = i;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}