//
//  main.cpp
//  Algorithm
//
//  Created by 陈奇 on 2021/3/8.
//  Copyright © 2021 陈奇. All rights reserved.
//

//#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include "Solution1.h"

using namespace std;

// 输入三个数求最大值
int getMaxNum(int p_num1,int p_num2,int p_num3){
    int max = p_num1;
    if(p_num2 > max){
        max = p_num2;
    }
    
    if(p_num3 > max){
        max = p_num3;
    }
    return max;
}

// 输入一个成绩，打印对应的等级
int getScoreLevel(){
    int score;
    cout << "输入分数:"<< endl;
    cin >> score ;
    if(score >= 0 && score < 60){
        cout << "C级" << endl;
    }else if (score >= 60 && score < 90){
        cout << "B级" << endl;
    }else if (score >= 90 && score <= 100){
        cout << "A级" << endl;
    }else{
        cout << "请输入1-100区间内的分数" << endl;
    }
    return 0;
}

int test(vector<int>&nums){
    int maxNum = nums[0];
    int cur = 0;
    for(int i = 0; i < nums.size();i++){
        cur = cur + nums[i];
        maxNum = max(maxNum,cur);
        if(cur < 0){
            cur = 0;
        }
    }
    return maxNum;
}


int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int mid = (right - left) / 2 + left;
    while(nums[mid] != target){
        if(nums[mid] < target){
            left = mid;
        }else{
            right = mid;
        }
        if(left >= right){
            return -1;
        }
        
        mid = (right - left) / 2 + left;
    }
    return mid;
}

/// <#Description#>
/// @param argc <#argc description#>
/// @param argv <#argv description#>
int main(int argc, const char * argv[]) {
//    Solution1* s = new Solution1();
//    s->test();
//    map<int,bool> map;
//    map[1] = true;
//    if(map[2]){
//        cout << "ww"<<endl;
//    }else{
//        cout << "22"<<endl;
//    }
    
    vector<int>a;
    a.push_back(-1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(5);
    a.push_back(9);
    a.push_back(12);
    
    int result = search(a,9);
    cout << result <<endl;

    return 0;
}

