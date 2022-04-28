//
//  Solution4.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/14.
//  Copyright © 2021 陈奇. All rights reserved.

//  最大子序数

#ifndef Solution4_h
#define Solution4_h

#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

class Solution4{
public:
    //给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
    int maxSubArray(vector<int>& nums) {
        int resultMaxNums = nums[0];
        int curMaxNums = 0;
        for(int i = 0;i < nums.size();i++){
            curMaxNums = curMaxNums + nums[i];
            if (curMaxNums > resultMaxNums){
                resultMaxNums = curMaxNums;
            }
            if(curMaxNums < 0 ){
                curMaxNums = 0;
            }
        }
        return resultMaxNums;
    }
};

#endif /* Solution4_h */
