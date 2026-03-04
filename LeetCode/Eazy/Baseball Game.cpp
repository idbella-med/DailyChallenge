// https://leetcode.com/problems/baseball-game/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;

class Solution {
    public:
        int calPoints(vector<string>& operations) {
            vector<int> v;
            for (string s : operations) {
                if (s == "D")
                    v.push_back(2 * v[v.size()-1]);
                else if (s == "C")
                    v.pop_back();
                else if (s == "+")
                    v.push_back(v[v.size() -1] + v[v.size() -2]);
                else 
                    v.push_back(stoi(s));
            }
            return accumulate(v.begin(), v.end(), 0);
        }
    };