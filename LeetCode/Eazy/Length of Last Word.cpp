//https://leetcode.com/problems/length-of-last-word/
#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        while (ss >> s);
        return s.size();
    }
};