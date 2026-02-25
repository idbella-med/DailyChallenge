// https://leetcode.com/problems/product-of-array-except-self/description/
#include <iostream>
#include <vector>


using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector <int> a;
            double mult = 1, z =0;
            for (int n : nums) {
                if (n != 0)
                    mult *= n;
                else
                    z++;
            }
            if (z > 1)
                return vector<int>(nums.size(), 0);
            for (int n : nums) {
                if (z > 0)
                    a.push_back((n == 0) ? mult : 0);
                else
                    a.push_back(mult / n);
            }
            return a;
        }
};