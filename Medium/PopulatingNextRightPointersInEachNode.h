#pragma once

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        Node* pCurrent = root;
        Node* pNext = root->left;

        while (pNext) {
            while (pCurrent) {
                pCurrent->left->next = pCurrent->right;
                if (pCurrent->next) {
                    pCurrent->right->next = pCurrent->next->left;
                }
                pCurrent = pCurrent->next;
            }
            pCurrent = pNext;
            pNext = pNext->left;
        }

        return root;
    }
};