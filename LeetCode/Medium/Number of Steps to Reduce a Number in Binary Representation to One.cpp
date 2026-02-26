//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
#include <iostream>

using namespace std;


class Solution {
    public:
        int numSteps(string s) {
            int a = 0;
            int c = 0;

            for (int i = s.size() - 1; i > 0; i--) {
                if ((s[i] - '0' + c) == 1) {
                    a += 2;
                    c = 1;
                } else {
                    a += 1;
                }
            }

            return a + c;
        }
};