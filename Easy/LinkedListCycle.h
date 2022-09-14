#pragma once

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* pFast = head;
        ListNode* pSlow = head;

        while (head) {
            if (!pFast->next) return false;
            pFast = pFast->next;
            if (!pFast->next) return false;
            pFast = pFast->next;
            if (pFast == pSlow) return true;
            pSlow = pSlow->next;
        }
        return false;
    }
};