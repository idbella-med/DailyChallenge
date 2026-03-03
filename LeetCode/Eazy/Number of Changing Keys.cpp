// https://leetcode.com/problems/number-of-changing-keys/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        std::transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c){ return std::tolower(c); });
        char a = s[0];
        int res = 0;
        for (char &c : s) {
            if (a != c) {
                a = c;
                res++;
            }
        }
        return res;
    }
};