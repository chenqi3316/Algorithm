//
//  Solution1.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/14.
//  Copyright © 2021 陈奇. All rights reserved.

//  判断链表是否有环

#ifndef Solution1_h
#define Solution1_h

#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 链表是否有环
class Solution1{
public:
//    bool hasCycle(ListNode *head) {
//        int pos = -1;
//        map<ListNode*,int> tempMap;
//        while (head) {
//            if(tempMap.find(head) != tempMap.end()){
//                return true;
//            }
//            pos++;
//            tempMap[head] = pos;
//            head = head->next;
//        }
//
//        return false;
//    }
    
    //最优解，快慢指针
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        
        ListNode* quickNode = head->next;
        ListNode* slowNode = head;
        while (quickNode && quickNode->next && quickNode->next->next) {
            quickNode = quickNode->next->next;
            slowNode = slowNode->next;
            if(quickNode == slowNode){
                return true;
            }
        }
        return false;
    }
    
    void test(){
        ListNode*d = new ListNode(3,nullptr);
        ListNode*c = new ListNode(2,d);
        ListNode*b = new ListNode(0,c);
        ListNode*a = new ListNode(4,b);
        d->next = b;
        
        Solution1* s = new Solution1();
        bool result2 = s->hasCycle(a);
        cout << result2 << endl;
    }
};

#endif /* Solution1_h */
