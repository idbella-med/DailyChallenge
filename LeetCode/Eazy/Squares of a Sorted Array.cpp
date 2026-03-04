//https://leetcode.com/problems/squares-of-a-sorted-array/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for (int n : nums)
            res.push_back(pow(n, 2));
        sort(res.begin(), res.end());
        return res;
    }
};