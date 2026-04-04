// https://leetcode.com/problems/strictly-palindromic-number/


/*
    Why is the answer always false?
    Consider the representation of n in base n - 2:
    n = 1 * (n - 2) ^ 1 + 2 * (n - 2) ^ 0, which gives us 12 for each n in base n-2, which is not palindrome.
*/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        bool isStrictlyPalindromic(int n) {
            return false;
        }
};