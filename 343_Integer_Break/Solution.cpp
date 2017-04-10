/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月10日 星期一 20时08分37秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
using namespace std;
class Solution{
public:
    int integerBreak(int n){
        int re=n/6;
        int tmp=n%6;
        if(re==0){
            switch(n){
                case 2:
                tmp=1;
                break;
                case 3:
                tmp=2;
                break;
                case 4:
                tmp=4;
                break;
                case 5:
                tmp=6;
                break;
            }
        }else{
        switch(tmp){
            case 0:
            tmp=1;
            break;
            case 1:
            re--;
            tmp=12;
            break;
            case 2:
            tmp=2;
            break;
            case 3:
            tmp=3;
            break;
            case 4:
            tmp=4;
            break;
            case 5:
            tmp=6;
            break;
        }
        }
        int res=tmp;
        for(int i=0;i<re;i++){
            res*=9;
        }
        return res;
    }
};
