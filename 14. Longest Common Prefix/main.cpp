#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string dosearch (vector<string>& strs, int start, int end) {
        if (end - start == -1)
            return "";

        if (end - start == 0)
            return strs[start];

        if (end - start == 1)
            return find_prefix(strs[start], strs[end]);

        return find_prefix(dosearch(strs, start, (start+end)/2), dosearch(strs, (start+end)/2+1, end));

    }

    string longestCommonPrefix(vector<string>& strs) {
        dosearch(strs, 0, strs.size() - 1);

        ////////////////////////////////////////////////////////////////////
//        if (strs.size() == 0)
//            return "";
//
//        if (strs.size() == 1)
//            return strs[0];
//
//        if (strs.size() == 2)
//            return find_prefix(strs[0], strs[1]);
//
//        vector<string> s1, s2;
//        for (int i = 0; i < strs.size(); i++) {
//            if (i < strs.size() / 2)
//                s1.push_back(strs[i]);
//            else
//                s2.push_back(strs[i]);
//        }
//
//        return find_prefix(longestCommonPrefix(s1), longestCommonPrefix(s2));
////////////////////////////////////////// ////////////////////////////////////////
//        if (strs.size() == 0)
//            return "";
//
//        vector<string> tmp;
//        for (int i = 0; i < strs.size(); i += 2) {
//            if (i != strs.size() - 1) {
//                tmp.push_back(find_prefix(strs[i], strs[i + 1]));
//            } else {
//                tmp.push_back(strs[i]);
//            }
//        }
//
//        if (tmp.size() == 1)
//            return tmp[0];
//
//        return longestCommonPrefix(tmp);
    }

    string find_prefix(string s1, string s2) {
        if (s1 == "" || s2 == "")
            return "";

        int len = 1;
        while (len <= s1.size() && len <= s2.size() && s1.substr(0, len) == s2.substr(0, len))
            len++;

        return s1.substr(0, len - 1);

    }
};

int main() {
    string s1 = "abcdef";
    string s2 = "abcdefg";
    vector<string> vec;
    vec.push_back(s1);
    vec.push_back(s2);

    Solution s;
    cout << s.longestCommonPrefix(vec) << endl;

    return 0;
}