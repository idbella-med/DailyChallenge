// https://leetcode.com/problems/check-if-the-sentence-is-pangram/
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string s) {
        string t = "abcdefghijklmnopqrstuvwxyz";
        return std::all_of(t.begin(), t.end(), [&s](char c) {
            return s.find(c) != std::string::npos;
        });
    }
};