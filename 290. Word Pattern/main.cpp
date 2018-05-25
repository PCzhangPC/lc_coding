#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> str_vec;
        int last_empty = -1;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                str_vec.push_back(str.substr(last_empty + 1, i - last_empty - 1));
                last_empty = i;
            }
        }
        str_vec.push_back(str.substr(last_empty + 1, str.size() - last_empty - 1));
        if (str_vec.size() != pattern.size())
            return false;

        map<char, string> dict1;
        map<string, char> dict2;
        for (int i = 0; i < pattern.size(); i++) {
            if (dict1.count(pattern[i])) {
                if (dict1[pattern[i]] != str_vec[i])
                    return false;
            } else if (dict2.count(str_vec[i])) {
                if (dict2[str_vec[i]] != pattern[i])
                    return false;
            } else {
                dict1[pattern[i]] = str_vec[i];
                dict2[str_vec[i]] = pattern[i];
            }
        }

        return true;
    }
};

int main() {
    string pattern = "abba";
    string str = "dog cat cat dog";
    Solution s;
    s.wordPattern(pattern, str);
    return 0;
}