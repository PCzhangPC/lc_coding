#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if (s.size() < p.size())
            return res;

        map<char, int> dict;
        for (int i = 0; i < p.size(); i++) {
            if (dict.find(p[i]) == dict.end())
                dict[p[i]] = 1;
            else
                dict[p[i]]++;
        }

        map<char, int> dict2;
        int win_size = p.size();
        int offset = 0;
        while (offset + win_size <= s.size()) {
            if (offset == 0) {
                for (int i = 0; i < win_size; i++) {
                    if (dict2.find(s[i]) == dict2.end())
                        dict2[s[i]] = 1;
                    else
                        dict2[s[i]]++;
                }
            } else {
                dict2[s[offset - 1]]--;
                dict2[s[offset + win_size - 1]]++;
            }

            bool flag = true;
            for (map<char, int>::iterator it = dict.begin(); it != dict.end(); it++) {
                if (it->second != dict2[it->first]) {
                    flag = false;
                    break;
                }
            }

            if (flag)
                res.push_back(offset);

            offset++;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}