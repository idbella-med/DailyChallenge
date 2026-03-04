// https://leetcode.com/problems/maximum-gap/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2)
            return 0;
        sort(nums.begin(), nums.end(), greater<int>());
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i <= nums.size() - 2)
                mx = max(nums[i] - nums[i + 1], mx);
        }
        return mx;
    }
};