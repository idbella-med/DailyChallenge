/*
    https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
*/
#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return (haystack.find(needle));
    }
};