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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }

        ListNode* l = head;
        ListNode* r = l->next;

        while (r) {
            if (l->val == r->val) {
                l->next = r->next;
                r = r->next;
            }
            else {
                l = r;
                r = l->next;
            }
        }
        return head;
    }
};