// https://leetcode.com/problems/find-words-containing-character/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> n;
        int i = 0;
        for (string& a : words) {
            if(a.find(x) != string::npos)
                n.push_back(i);
            i++;
        }
        return n;
    }
};