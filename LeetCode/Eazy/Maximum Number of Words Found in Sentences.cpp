// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for (string a : sentences) {
            stringstream ss(a);
            int c = 0;
            while (ss >> a) c++;
            if (mx < c) mx = max(mx, c);
        }
        return mx;
    }
};