//
//  Solution3.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/14.
//  Copyright © 2021 陈奇. All rights reserved.

// 反转链表

#ifndef Solution3_h
#define Solution3_h

#include <stdio.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution3{
public:
    // 反转链表，并返回反转后的链表 (迭代和递归)
    // 反转链表-迭代
    ListNode* reverseList(ListNode* head) {
        ListNode *curent = head;
        ListNode *pre = nullptr;
        while (curent) {
            ListNode* next = curent->next;
            curent->next = pre;
            pre = curent;
            curent = next;
        }
        return pre;
    }

    // 反转链表-递归
    ListNode* reverseList2(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        
        ListNode* newHead = reverseList2(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
};

#endif /* Solution3_h */
