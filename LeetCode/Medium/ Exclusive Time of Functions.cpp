//https://leetcode.com/problems/exclusive-time-of-functions/
#include <vector>
#include <stack>
#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<int> st;
        int prevTime = 0;

        for (auto& log : logs) {
            stringstream ss(log);
            string idStr, type, timeStr;
            getline(ss, idStr, ':');
            getline(ss, type, ':');
            getline(ss, timeStr, ':');

            int id = stoi(idStr);
            int time = stoi(timeStr);

            if (type == "start") {
                if (!st.empty()) {
                    result[st.top()] += time - prevTime;
                }
                st.push(id);
                prevTime = time;
            } else {
                result[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }

        return result;
    }
};