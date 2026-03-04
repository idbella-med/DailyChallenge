// https://leetcode.com/problems/find-if-digit-game-can-be-won/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        bool canAliceWin(vector<int>& nums) {
            int a= 0, b= 0;
            for (int n : nums) {
                if (n >= 10) b += n;
                else a += n;
            }
            if (a == b)
                return false;
            return true;  
        }
};