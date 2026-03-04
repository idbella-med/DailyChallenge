//https://leetcode.com/problems/top-k-frequent-words/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for (string &s : words)
            m[s]++;
        
        vector<pair<string, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [&](auto& a, auto& b) {
            if (a.second == b.second) 
                return a.first < b.first;
            return a.second > b.second;
        });
        vector<string> res;
        for (auto &p : v) {
            if (k <= 0)
                break;
            res.push_back(p.first);
            k--;
        }
        return res;
    }
};