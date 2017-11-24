#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.size() < 2)
            return 0;

        int i = 0;
        int j = height.size() - 1;

        int max_are = 0;
        while (i < j) {
            int tmp_are = (height[i] < height[j] ? height[i] : height[j]) * (j - i);
            max_are = tmp_are > max_are ? tmp_are : max_are;

            if (height[i] < height[j])
                i++;
            else
                j--;
        }

        return  max_are;

    }
};

int main() {
    vector<int> vec;
    int a[] = {2,3,4,5,18,17,6};

    for (int i = 0 ;i < 7; i++)
        vec.push_back(a[i]);

    Solution s;
    cout << s.maxArea(vec) << endl;

    return 0;
}