//https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2= 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0)
                num2 += i;
            else 
                num1 += i;
        }
        return num1- num2;
    }
};