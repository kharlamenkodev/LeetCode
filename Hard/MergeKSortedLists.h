#pragma once
#include <vector>

using std::vector;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

 class Solution {
 public:
     ListNode* mergeKLists(const vector<ListNode*>& lists) {

         ListNode* pHead = nullptr;

         for (size_t i = 0; i < lists.size(); i++) {
             pHead = merge(lists[i], pHead);
         }

         return pHead;
     }

 private:
     ListNode* merge(ListNode* l1, ListNode* l2) {
         if (!l1) return l2;
         if (!l2) return l1;

         if (l1->val <= l2->val) {
             l1->next = merge(l1->next, l2);
             return l1;
         }
         else {
             l2->next = merge(l2->next, l1);
             return l2;
         }
     }
 };