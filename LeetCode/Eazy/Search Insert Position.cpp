// https://leetcode.com/problems/search-insert-position/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        unordered_set<int> s(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (s.count(target)) {
                if (nums[i] == target)
                    return i;
            } else {
                if (nums[i] > target)
                    return i;
            }
        }
        return nums.size();
    }
};