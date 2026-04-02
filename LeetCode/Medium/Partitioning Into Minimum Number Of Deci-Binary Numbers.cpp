// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        int minPartitions(string n) {
            int m = 0;
            for (char c : n) {
                m = max(m, (c - '0'));
            }
            return m;
        }
};