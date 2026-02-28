// https://leetcode.com/problems/smallest-pair-with-different-frequencies/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int n : nums) {
            a[n]++;
        }
        vector<int> v;
        for (auto &p : a) {
            v.push_back(p.first);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++) {
            for(int j = i; j < v.size(); j++) {
                int m = v[i];
                int y = v[j];
                if (a[m] != a[y])
                    return {m ,y};
            }
        }
        return {-1, -1};
    }
};