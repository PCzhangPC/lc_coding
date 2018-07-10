#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), [](string s1, string s2){
            if (s1.size() == s2.size())
                return s1 < s2;
            return s1.size() > s2.size();
        });


        for (int i = 0; i < d.size(); ++i) {
            int index = 0;
            for (int j = 0; j < d[i].size(); ++j, ++index) {
                while (index < s.size() && s[index] != d[i][j]) {
                    ++index;
                }
            }

            if (index <= s.size())
                return d[i];
        }
        return "";
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}