// https://leetcode.com/problems/sort-characters-by-frequency/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for (char &c : s)
            m[c]++;
        
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [&](auto& a, auto& b) {
            if (a.second == b.second) 
                return a.first < b.first;
            return a.second > b.second;
        });
        string a;
        for (auto &p : v) {
            int n = p.second;
            while (n) {
                a+=p.first;
                n--;
            }
        }
        return a;
    }
};