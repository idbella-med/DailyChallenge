// https://leetcode.com/problems/type-of-triangle/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0],b = nums[1], c= nums[2];
        if (a + b <= c)
           return "none";
        if (a == b && b == c)
            return "equilateral";
        if (a == b || a == c || b == c)
            return "isosceles";
        return "scalene";
    }
};