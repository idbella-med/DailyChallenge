// https://leetcode.com/problems/merge-close-characters/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeCharacters(string s, int k) {
        string a = s;
        while(true) {
            bool m = false;
            for (int i = 0; i < a.size(); i++) {
                for (int j = i + 1; j < a.size() && j - i <= k; j++) {
                    if (a[i] == a[j]) {
                        m = true;
                        a.erase(j, 1);
                        break;
                    }
                }
                if (m) break;
            }
            if (!m) break;
        }
        return a;
    }
};