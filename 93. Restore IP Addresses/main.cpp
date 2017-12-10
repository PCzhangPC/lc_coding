#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//////写的太烂了

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        solve(res, s, 0, 0);
        return res;
    }

    void solve(vector<string>& res, string s, int index, int count) {
        string re = s.substr(index);
        int len = re.size();
        const char* rest = re.c_str();

        if (len < 4 - count || len > 3 * (4 - count) || (count == 3 && len > 1 && re[0] == '0'))
            return;

        if (count == 3 && atoi(rest) < 256) {
            res.push_back(s);
            return;
        }

        for (int i = 0; i < 3 && index < s.size(); i++) {
            index++;
            if(atoi(s.substr(index - i - 1, i + 1).c_str()) > 255)
                break;

            s.insert(index, ".");
            solve(res, s, index + 1, count + 1);
            s.erase(index, 1);

            if((i == 0 && s[index - 1] == '0'))
                break;
        }
    }
};

int main() {
    string str = "1111";
    Solution s;
    s.restoreIpAddresses(str);
    return 0;
}