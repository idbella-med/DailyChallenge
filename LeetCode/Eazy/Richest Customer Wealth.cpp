// https://leetcode.com/problems/richest-customer-wealth/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int mx = 0;
            for (vector<int> &c : accounts) {
                int a = accumulate(c.begin(), c.end(), 0);
                mx = max(a, mx);
            }
            return mx;
        }
    };