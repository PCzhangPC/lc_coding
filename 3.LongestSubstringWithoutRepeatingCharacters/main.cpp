#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> dic;
        if (s == "")
            return 0;

        int max = 0;
        int delp = 0;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            char tmp = s[i];
            if (dic.find(tmp) == dic.end()) { //没找到
                count++;
                dic[tmp] = i;
            } else {
                delp = i - dic[tmp];
                if (delp <= count)
                    count = delp;
                else
                    count++;

                dic[tmp] = i;
            }

            if (max < count)
                max = count;
        }

        return max;

    }
};

int main() {
    string str = "pwwkew";
    Solution s;
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}