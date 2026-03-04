// https://leetcode.com/problems/three-consecutive-odds/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr) {
            int c = 0;
            int mx = 0;
            for (int n : arr) {
                if (n % 2 != 0)
                    c++;
                else 
                    c = 0;
                mx = max(mx, c);
            }
            if (mx >= 3)
                return true;
            return false;
        }
};