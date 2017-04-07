/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月28日 星期二 19时53分53秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool checkPerfectNumber(int num){
        int sum=1;
        for(int i=2;i<num;i++){
            int div=num/i;
            if(div<i){
                break;
            }
            if(div*i==num){
              sum+=div;
                sum+=i;
            }
        }
        if(sum==num){
            return true;
        }
            return false;
    }
};
int main(){
    Solution s;
    if(s.checkPerfectNumber(102827)){
        cout<<"这是一个完美数"<<endl;
    }else{
        cout<<"这不是一个完美数"<<endl;
    }
}
