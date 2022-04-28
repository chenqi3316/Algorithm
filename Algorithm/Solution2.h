//
//  Solution2.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/14.
//  Copyright © 2021 陈奇. All rights reserved.

//  数组中重复的数字

#ifndef Solution2_h
#define Solution2_h

#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

class Solution2{
public:
    // 查找数组中第一个重复的数字
    int findRepeatNumber(vector<int>& nums) {
        map<int,bool>tempMap;
        vector<int>::iterator it;
        for (it = nums.begin(); it!=nums.end(); it++) {
            if (tempMap.find(*it) != tempMap.end()){
                return *it;
            };
            tempMap[*it] = true;
        }
        
        return -1;
    }
};

#endif /* Solution2_h */
