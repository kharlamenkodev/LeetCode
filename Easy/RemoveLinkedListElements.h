#pragma once

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pDummy = new ListNode(0, head);
        ListNode* pPrev = pDummy;
        ListNode* pCurrent = pDummy->next;

        while (pCurrent) {
            if (val == pCurrent->val) {
                pPrev->next = pCurrent->next;
            }
            else {
                pPrev = pPrev->next;
            }

            pCurrent = pCurrent->next;
        }

        return pDummy->next;

    }
};