// https://leetcode.com/problems/number-of-employees-who-met-the-target/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c= 0;
        for (int &n : hours) {
            if (n >= target)
                c++;
        }
        return c;
    }
};