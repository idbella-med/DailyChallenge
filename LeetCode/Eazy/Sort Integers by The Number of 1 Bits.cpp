//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/?envType=daily-question&envId=2026-02-25

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            long ca = __builtin_popcount(a);
            long cb = __builtin_popcount(b);
            return (ca == cb) ? a < b : ca < cb;
        });
        return arr;
    }
};