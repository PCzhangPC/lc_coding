#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size() <= k)
            return s.size();

        int win_size = k + 1;
        int offset = 0;
        vector<int> count(26, 0);

        while (win_size <= s.size()) {
            if (offset == 0) {
                for (int i = 0; i < win_size; i++) {
                    count[s[i + offset] - 'A']++;
                }
            } else {
                count[s[offset - 1] - 'A']--;
                count[s[offset + win_size - 1] - 'A']++;
            }

            int max_fre = 0;
            for (int i = 0; i < count.size(); i++)
                max_fre = max_fre > count[i] ? max_fre : count[i];

            if (win_size - max_fre <= k) {
                win_size++;
                offset = 0;
                for (int i = 0; i < count.size(); i++)
                    count[i] = 0;
            } else {
                if (offset + win_size >= s.size())
                    return win_size - 1;
                else
                    offset++;
            }
        }
        return win_size - 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}