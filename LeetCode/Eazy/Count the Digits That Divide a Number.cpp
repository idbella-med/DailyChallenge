// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

#include <iostream>

using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int sum = 0;
        string a = to_string(num);
        for (char c : a) {
            if (num % (c - '0') == 0) sum++;
        }
        return sum;
    }
};