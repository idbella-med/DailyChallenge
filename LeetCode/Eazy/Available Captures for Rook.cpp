// https://leetcode.com/problems/available-captures-for-rook/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int res = 0;
        int row = -1;
        int col = -1;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        
        for (int j = col - 1; j >= 0; j--) {
            if (board[row][j] != '.') {
                if (board[row][j] == 'p') {
                    res++;
                    break;
                } else
                    break;
            }
        }

        for (int j = col + 1; j < 8; j++) {
            if (board[row][j] != '.') {
                if (board[row][j] == 'p') {
                    res++;
                    break;
                } else
                    break;
            }
        }

        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] != '.') {
                if (board[i][col] == 'p') {
                    res++;
                    break;
                } else
                    break;
            }
        }

        for (int i = row + 1; i < 8; i++) {
            if (board[i][col] != '.') {
                if (board[i][col] == 'p') {
                    res++;
                    break;
                } else
                    break;
            }
        }
        return res;
    }
};