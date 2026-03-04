// https://leetcode.com/problems/contains-duplicate-iii/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
#include <set>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<long long> w;

        for (int i = 0; i < nums.size(); i++) {

            if (i > indexDiff) {
                w.erase(nums[i - indexDiff - 1]);
            }

            auto it = w.lower_bound((long long)nums[i] - valueDiff);

            if (it != w.end() && *it <= (long long)nums[i] + valueDiff) {
                return true;
            }

            w.insert(nums[i]);
        }

        return false;
    }
};