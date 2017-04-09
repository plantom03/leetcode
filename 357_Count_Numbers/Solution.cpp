/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月09日 星期日 13时42分07秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
using namespace std;
class Solution{
public:
    int countNumberWithUniqueDigits(int n){
        if(n==0){
            return 0;
        }
        int res=0;
        for(int i=1;i<=n;i++){
            if(i==1){
                res+=10;
            }else{
                int tmp=1;
                for(int j=0;j<i;j++){
                    if(j==0){
                        tmp*=9;
                    }else{
                        tmp*=(10-j);
                    }
                }
                res+=tmp;
            }
        }
        return res;
    }
};
