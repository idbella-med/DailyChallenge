// https://leetcode.com/problems/palindrome-number/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            string a = to_string(x);
            string b= a;
            reverse(b.begin(), b.end());
            return a == b;
        }
    };