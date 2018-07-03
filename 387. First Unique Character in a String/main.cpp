#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<int, int> dic;
        for (int i = 0; i < s.size(); i++) {
            if (dic.count(s[i])) {
                dic[s[i]]++;
            } else {
                dic[s[i]] = 1;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (dic[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}