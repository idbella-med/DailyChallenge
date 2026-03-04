// https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;


class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int mx = nums[0];
            int sum = 0;
            for (int n : nums) {
                sum += n;
                mx = max(sum, mx);
                if (sum < 0)
                    sum = 0;
            }
            return mx;
        }
    };