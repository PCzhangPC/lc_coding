#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>vec(num+1,0);
        vec[0]=0;
        for(int i = 1; i <= num; i++){
            vec[i]=vec[i/2]+(i % 2);
        }
        return vec;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}