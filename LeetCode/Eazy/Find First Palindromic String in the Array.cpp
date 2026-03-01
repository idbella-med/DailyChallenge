//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool is_it_P(string& a) {
        string m = a;
        reverse(m.begin(), m.end());
        return m == a;
    }
    string firstPalindrome(vector<string>& words) {
        for (string a : words) {
            if (is_it_P(a))
                return a;
        }
        return "";
    }
};