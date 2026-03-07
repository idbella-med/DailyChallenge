// https://leetcode.com/problems/add-to-array-form-of-integer/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
    string add_string(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string res;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0)
                sum += a[i] - '0';
            if (j >= 0)
                sum += b[j] - '0';
            
            res.insert(res.begin(), (sum % 10) + '0');
            carry = sum /10;
            i--;
            j--;
        }
        return res;
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s;
        for (int n : num) {
            s += to_string(n);
        }
        s = add_string(s, to_string(k));
        vector<int> res;
        for (char c : s)
            res.push_back(c - '0');
        return res;
    }
};