#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class node {
public:
    char c;
    int count;
    node(char c, int count):c(c), count(count) {}
};

int mycomp(node &a, node &b) {
    return a.count > b.count;
}

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> dict;
        for (int i = 0; i < s.size(); i++)
            ++dict[s[i]];

        vector<node> vec;
        string res = "";
        for (map<char, int>::iterator it = dict.begin(); it != dict.end(); ++it) {
            vec.push_back(node(it->first, it->second));
        }

        sort(vec.begin(), vec.end(), mycomp);
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec[i].count; j++)
                res+=vec[i].c;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}