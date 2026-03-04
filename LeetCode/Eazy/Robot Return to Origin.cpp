// https://leetcode.com/problems/robot-return-to-origin/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        bool judgeCircle(string moves) {
            int x = 0, y = 0;
            for (char c : moves) {
                if (c == 'U') x++;
                else if (c == 'D') x--;
                else if (c == 'L') y++;
                else y--;
            }
            if (!x && !y)
                return true;
            return false;
        }
    };