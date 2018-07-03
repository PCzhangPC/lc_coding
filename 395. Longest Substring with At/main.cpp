#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        if (s == "")
            return 0;

        map<char, int> dict;
        for (int i = 0; i < s.size(); i++) {
            if (dict.count(s[i]))
                dict[s[i]]++;
            else
                dict[s[i]] = 1;
        }

        vector<char> vec;
        set<char> set1;
        for (map<char, int>::iterator it = dict.begin(); it != dict.end(); it++) {
            if (it->second < k) {
                vec.push_back(it->first);
                set1.insert(it->first);
            }
        }

        if (vec.empty())
            return s.size();

        int max_len = 0;
        vector<int> pos(1, -1);
        for (int i = 0; i < s.size(); i++) {
            if (set1.find(s[i]) != set1.end())
                pos.push_back(i);
        }
        pos.push_back(s.size());

        for (int i = 0; i < pos.size() - 1; i++) {
            int len = pos[i + 1] - pos[i] - 1;
            if (len > 0) {
                int tmp_len = longestSubstring(s.substr(pos[i] + 1, len), k);
                max_len = tmp_len > max_len ? tmp_len : max_len;
            }
        }

        return max_len;
    }
};

int main() {
    string str = "ababbc";
    Solution s;
    cout << s.longestSubstring(str, 2);
    return 0;
}