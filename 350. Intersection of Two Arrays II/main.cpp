#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;

        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        while (it1 != nums1.end() && it2 != nums2.end()) {
            vector<int>::iterator it_find = binary_search(*it1, nums2);
            if (it_find != nums2.end()) {
                res.push_back(*it1);

                nums1.erase(it1);
                nums2.erase(it_find);
            } else {
                it1++;
                it2 = nums2.begin();
            }
        }

        return res;
    }

    vector<int>::iterator binary_search(int num, vector<int> &vec) {
        vector<int>::iterator low = vec.begin();
        vector<int>::iterator high = vec.end() - 1;

        while (high - low >= 0) {
            vector<int>::iterator mid = low + (high - low) / 2;
            if (*mid == num)
                return mid;

            if (*mid < num)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return vec.end();
    }
};

int main() {
    vector<int> vec1 = {2,2};
    vector<int> vec2 = {2,2};

    Solution s;
    s.intersect(vec1, vec2);
    return 0;
}