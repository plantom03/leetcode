/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月10日 星期一 20时56分53秒
    将n个石头 分成数堆 相邻两堆数量不同 求最多可以分成多少数目大于k的堆
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
using namespace std;
class Solution{
public:
    int point_stones(int n,int k){
        int m=n/(2*k+1);
        int tmp=n/(2*k+1);
        if(tmp>=k){
            m++;
        }
        return m;
    }

};
