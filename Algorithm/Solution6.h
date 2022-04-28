//
//  Solution6.h
//  Algorithm
//
//  Created by 陈奇 on 2021/10/18.
//  Copyright © 2021 陈奇. All rights reserved.

//  回文字符串

#ifndef Solution6_h
#define Solution6_h

#include <stdio.h>
#include <string>

using namespace std;

class Solution6{
    public:
//        bool isPalindrome(int x) {
//            if(x < 0){
//                return false;
//            }
//
//            string a = to_string(x);
//            for (int i = 0; i < a.size()/2; i++) {
//                char b = a.at(i);
//                char c = a.at(a.size() - i - 1);
//                if(b!= c){
//                    return false;
//                }
//            }
//            return true;
//        }
    
        //最优解 思路：分解一个整数，当原始整数大于中间值时，说明已经比较过半，没有再比较的必要。
        //传入参数为奇数位时x == tmp / 10，偶数位时x == tmp
    bool isPalindrome(int x){
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int tmp = 0;
        while (x > tmp)
        {
            tmp = tmp * 10 + x % 10;
            x /= 10;
        }
        return x == tmp || x == tmp / 10;
    }
};

#endif /* Solution6_h */
