#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> dict;
        for (int i = 0; i < nums.size(); i++)
            dict[nums[i]]++;

        priority_queue<pair<int, int>> queue;
        for (map<int, int>::iterator it = dict.begin(); it != dict.end(); it++)
            queue.push(pair<int, int>(it->second, it->first));

        vector<int> res;
        for (int i = 0 ; i < k; i++) {
            int num = queue.top().second;
            queue.pop();
            res.push_back(num);
        }

        return res;
    }
};

int main() {
    map<int, int> dict;
    dict[1]++;
    cout << dict[1] <<endl;
    cout << dict[100] << endl;
    return 0;
}