// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
    public:
        int subtractProductAndSum(int n) {
            int sum = 0, mult = 1;
            string s = to_string(n);
            for (char &c : s) {
                sum += (c - '0');
                mult *= (c - '0');
            }
            return mult - sum;
        }
};