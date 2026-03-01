//https://leetcode.com/problems/sum-multiples/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int i =1; i <= n; i++) {
            if (!(i % 3)||!(i % 5)||!(i % 7))
                sum += i;
        }
        return sum;
    }
};