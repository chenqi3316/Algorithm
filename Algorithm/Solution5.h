//
//  Solution5.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/14.
//  Copyright © 2021 陈奇. All rights reserved.

// 跳跃II

#ifndef Solution5_h
#define Solution5_h

#include <stdio.h>
#include <vector>

using namespace std;

class Solution5{
public:
    // 跳跃II
    int jump(vector<int>& nums) {
        int minStep = 1;
        int nextIndex = 0;
        
        if(nums.size() == 1){
            return 0;
        }
        
        if(nums[0] >= nums.size()-1){
            if(minStep > 1){
                --minStep;
            }
            return minStep;
        }
        
        int tempNum = 0;
        for (int i = 1; i <= nums[0]; i++) {
            int a = i + nums[i];
            if(a > tempNum){
                tempNum = a;
                nextIndex = i;
            }
        }
        nums.erase(nums.begin(), nums.begin() + nextIndex);
        int b = jump(nums);
        minStep += b;
        return minStep;
    }

    int jump2(vector<int> &nums){
        int maxPos = 0, n = nums.size(), end = 0, step = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (maxPos >= i) {
                maxPos = max(maxPos, i + nums[i]);
                if (i == end) {
                    end = maxPos;
                    ++step;
                }
            }
        }
        return step;
    }
    
    int test(vector<int> &nums){
        int maxIndex = 0;
        int endIndex = 0;
        int step = 0;
        for(int i = 0; i < nums.size() - 1;i++)
        {
            if(maxIndex >= i){
                maxIndex = max(maxIndex,i + nums[i]);
            }
            
            if(i == endIndex){
                endIndex = maxIndex;
                step++ ;
            }
        }
        return step;
    }
};

#endif /* Solution5_h */
