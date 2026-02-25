//https://leetcode.com/problems/add-digits/

#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;
        string a = to_string(num);
        int sum = 0;
        for (char n : a) {
            sum+= (n - '0');
        }
        return addDigits(sum);
    }
};