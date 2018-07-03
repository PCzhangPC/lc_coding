#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    pair<int, int> p;
    int sum;

    Node(int v1, int v2, int sum): p(v1, v2), sum(sum) {}
    friend bool operator <(const Node &n1, const Node &n2) {
        return n1.sum < n2.sum;
    }
};

class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<Node> pq;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                Node tmp(nums1[i], nums2[j], - (nums1[i] + nums2[j]));
                pq.push(tmp);
            }
        }

        vector<pair<int, int>> res;
        for (int i = 0; i < k && pq.size() > 0; i++) {
            res.push_back(pq.top().p);
            pq.pop();
        }
        return res;
    }
};


int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {3, 4, 5};
    Solution s;
    s.kSmallestPairs(nums1, nums2, 3);

    return 0;
}