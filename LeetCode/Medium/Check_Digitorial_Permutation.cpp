// subject below
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


class Solution {
public:
    unsigned long long factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    bool isDigitorialPermutation(int n) {
        vector<int> nums;
        int backup = n;
        while (n > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }
        int res = 0;
        for (int h : nums) {
            res += factorial(h);
        }
        string a = to_string(res);
        string b = to_string(backup);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }
};

int main() {
    Solution s;
    int n = 1010; // add any number you wana test ?
    bool flag = s.isDigitorialPermutation(n);
    if (flag)
        cout << "your number is Digitorial Permutation" <<endl;
    else 
        cout << "your number is not Digitorial Permutation" <<endl;

}

/*
Q2. Check Digitorial Permutation
Solved
Medium
4 pt.

You are given an integer n.

A number is called digitorial if the sum of the factorials of its digits is equal to the number itself.

Determine whether any permutation of n (including the original order) forms a digitorial number.

Return true if such a permutation exists, otherwise return false.

Note:

    The factorial of a non-negative integer x, denoted as x!, is the product of all positive integers less than or equal to x, and 0! = 1.
    A permutation is a rearrangement of all the digits of a number that does not start with zero. Any arrangement starting with zero is invalid.

 

Example 1:

Input: n = 145

Output: true

Explanation:

The number 145 itself is digitorial since 1! + 4! + 5! = 1 + 24 + 120 = 145. Thus, the answer is true.

Example 2:

Input: n = 10

Output: false

Explanation:​​​​​​​

10 is not digitorial since 1! + 0! = 2 is not equal to 10, and the permutation "01" is invalid because it starts with zero.

 

Constraints:
    1 <= n <= 10^9
*/