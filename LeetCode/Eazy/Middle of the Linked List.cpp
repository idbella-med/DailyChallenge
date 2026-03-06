//https://leetcode.com/problems/middle-of-the-linked-list/


#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;
        while (s && s->next) {
            f = f->next;
            s = s->next->next;
        }
        return f;
    }
};