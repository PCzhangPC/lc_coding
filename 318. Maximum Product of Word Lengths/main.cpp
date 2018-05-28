#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int32_t > vec;
        for (int i = 0; i < words.size(); i++) {
            int32_t mask = 0;
            for (int j = 0; j < words[i].size(); j++) {
                mask |= 1 << words[i][j] - 'a';
            }
            vec.push_back(mask);
        }

        int max_product = 0;
        for (int i = 0; i < vec.size(); i++) {
            for (int j = i + 1; j < vec.size(); j++) {
                if (!(vec[i] & vec[j]) && words[i].size() * words[j].size() > max_product)
                    max_product = words[i].size() * words[j].size();
            }
        }
        return max_product;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}