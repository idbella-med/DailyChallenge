// https://leetcode.com/problems/reverse-integer/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            int sign = 0;
            if (x < 0)
                sign = 1;
            string s = to_string(x);
            std::reverse(s.begin(), s.end());
            if (stoll(s) > INT_MAX)
                return 0;
            if (sign)
                return stoll(s) * -1;
            return stoll(s);
        }
    };