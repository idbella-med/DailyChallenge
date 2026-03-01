//https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int sumd = 0;
        for (int &n : nums) {
            string a = to_string(n);
            for (char &c : a) {
                sumd += (c - '0');
            }
        }
        return abs(sum - sumd);
    }
};