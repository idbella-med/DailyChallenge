// https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
    public:
        int arraySign(vector<int>& nums) {
            int c = 0;
            for (int n : nums) {
                if (n == 0) {
                    return 0;
                }
                if (n < 0) {
                    c++;
                }
            }
            return (c % 2 == 0) ? 1 : -1;
        }
};