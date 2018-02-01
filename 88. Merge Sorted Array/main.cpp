#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>::iterator p_num1 = nums1.begin();
        vector<int>::iterator p_num2 = nums2.begin();

        while (p_num2 != nums2.end()) {
            while (p_num1 != nums1.end() && *p_num1 < *p_num2) {
                p_num1++;
            }
            nums1.insert(p_num1, *p_num2);
            p_num2++;
        }
    }
};

int main() {
    vector<int> v1 = {};
    return 0;
}