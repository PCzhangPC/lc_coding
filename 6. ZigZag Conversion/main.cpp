#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        int con = numRows - 1;
        vector<string> vec;
        for (int i = 0; i < numRows; i++)
            vec.push_back("");

        for (int i = 0; i < s.size(); i++) {
            int n = i % (2 * con);
            if (n > con)
                n = 2 * con - n;

            vec[n] += s[i];
        }

        string res = "";
        for (int i = 0; i < vec.size(); i++)
            res += vec[i];

        return res;
    }
};

int main() {
    string str = "PAYPALISHIRING";
    Solution s;
    cout << s.convert(str, 3) << endl;

    return 0;
}
