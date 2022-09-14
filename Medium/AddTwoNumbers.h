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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode* pForward = l1;
		ListNode* pBackward = l2;
		int sum = pForward->val + pBackward->val;

		if (!l1->next && !l2->next) {
			if (sum > 9) {
				return (new ListNode(sum % 10, new ListNode(1)));
			}
			else {
				return (new ListNode(sum));
			}
		}

		if (!l1->next && l2->next) {
			pForward = l2;
			pBackward = l1;
			l1->next = new ListNode(0);
		}
		else if (l1->next && !l2->next) {
			pForward = l1;
			pBackward = l2;
			l2->next = new ListNode(0);
		}

		if (sum > 9) {
			sum = sum % 10;
			pForward->next->val++;
		}

		return (new ListNode(sum, addTwoNumbers(pForward->next, pBackward->next)));
	}
};