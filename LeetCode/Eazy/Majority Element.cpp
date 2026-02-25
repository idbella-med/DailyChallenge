// https://leetcode.com/problems/majority-element/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        int n = nums.size()/ 2;
        for (int n : nums) 
            mp[n]++;
        for (auto x : mp) {
            if (x.second > n)
                res = x.first;
        }
        return res;
    }
};