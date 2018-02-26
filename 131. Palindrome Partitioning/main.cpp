#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        if (s.size()) {
            int start = 0, leng;
            for (leng = 1; leng <= s.size(); leng++) {
                string head_str = s.substr(start, leng);
                string tail_str = s.substr(start + leng, s.size() - leng);

                if (is_palind(head_str)) {
                    vector<vector<string>> tmp = partition(tail_str);

                    if (tmp.size()) {
                        for (int i = 0; i < tmp.size(); i++) {
                            tmp[i].insert(tmp[i].begin(), head_str);
                            res.push_back(tmp[i]);
                        }
                    } else {
                        vector<string> v;
                        v.push_back(head_str);
                        res.push_back(v);
                    }
                }
            }
        }

        return res;
    }

    bool is_palind(string s) {
        if (s.size()) {
            for (int i = 0; i < s.size() / 2; i++) {
                if (s[i] != s[s.size() - i - 1])
                    return false;
            }

            return true;
        }
        return true;
    }
};

int main() {
    string str = "a";
    Solution s;
    s.partition(str);
    return 0;
}