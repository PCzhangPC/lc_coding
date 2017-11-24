#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> dict;
        for (int i = 0; i < strs.size(); i++) {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());

            if (dict.find(tmp) == dict.end()) {
                vector<string> tmp_res = {strs[i]};
                dict[tmp] = tmp_res;
            } else {
                dict[tmp].push_back(strs[i]);
            }
        }

        for (map<string, vector<string>>::iterator iter = dict.begin(); iter != dict.end(); iter++) {
            res.push_back(iter->second);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}