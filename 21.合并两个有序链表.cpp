/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* _newNode = NULL;
        ListNode* _newNodeHead = NULL;
        while ( l1 && l2 )
        {
            bool _Less = (l1->val < l2->val);
            if (_newNode == NULL)
            {
                _newNode = _Less ? l1 : l2;
                _newNodeHead = _newNode;
                _Less ? l1=l1->next : l2 = l2->next;
            }else
            {
                _newNode->next = (_Less ? l1 :l2);
                _Less ? l1=l1->next : l2 = l2->next;
                _newNode = _newNode->next;
            }
        }
        while (l1)
        {
            if (_newNode == NULL)
            {
                _newNode = l1;
                l1= l1->next;
                _newNodeHead = _newNode;
            }else
            {
                _newNode->next = l1;
                l1= l1->next;
                _newNode = _newNode->next;
            }
        }
        while (l2)
        {
            if (_newNode == NULL)
            {
                _newNode = l2;
                l2 = l2->next;
                _newNodeHead = _newNode;

            }else
            {
                _newNode->next = l2;
                l2 = l2->next;
                _newNode = _newNode->next;
            }
        }
        return _newNodeHead;
        
    }
};

