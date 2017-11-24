#include <iostream>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        map<char, char> dic;
        dic['}'] = '{';
        dic[']'] = '(';
        dic[')'] = '(';
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '{' || c == '[' || c == '(')
                stack.push(c);
            else {
                if (dic.find(c) == dic.end())
                    return false;
                else {
                    if (stack.empty())
                        return false;
                    char tmp = stack.top();
                    if (tmp != dic[c])
                        return false;
                    stack.pop();
                }
            }
        }
        if (stack.empty())
            return true;
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}