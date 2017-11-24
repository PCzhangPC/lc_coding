#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
//    vector<string> letterCombinations(string digits) {
//        vector<string> dic;
//        dic.push_back("abc");
//        dic.push_back("def");
//        dic.push_back("ghi");
//        dic.push_back("jkl");
//        dic.push_back("mno");
//        dic.push_back("pqrs");
//        dic.push_back("tuv");
//        dic.push_back("wxyz");
//
//        vector<string> vec;
//        for (int i = 0; i < digits.size(); i++) {
////            char c = digits[i];
//            vec.push_back(dic[digits[i] - 48 - 2]);
//        }
//        vector<string> res;
//        for (int i = 0; i < vec.size(); i++) {
//            do_combine(res, vec[i]);
//        }
//
//        return  res;
//    }
//
//    void do_combine (vector<string> &res, string str) {
//        if (res.size() == 0) {
//            for (int i = 0; i < str.size(); i++) {
//                string tmp = str.substr(i, 1);
//                res.push_back(tmp);
//            }
//            return;
//        }
//
//        vector<string> tmpvec;
//        for (int i = 0; i < str.size(); i++) {
//            for (int j = 0; j < res.size(); j++) {
//                tmpvec.push_back(res[j] + str[i]);
//            }
//        }
//
//        res = tmpvec;
//    }

    vector<string> letterCombinations(string digits) {
        string d[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string s = "";

        vector<string> vec;
        do_combine(d, s, digits, 0, vec);
    }

    void do_combine(string d[], string s, string digits, int b, vector<string> &vec) {
        if (b == digits.size())
            vec.push_back(s);

        else {
            for (int i = 0; i < d[digits[b] - '0'].size(); i++) {
                do_combine(d, s+d[digits[b] - '0'][i], digits, b+1, vec);
            }
        }
    }

};

int main() {
    string str = "23";
    Solution s;
    s.letterCombinations(str);
    return 0;
}