/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月07日 星期二 14时59分31秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
using namespace std;
int findNthDigit(int n){
    long base=9;
    int digit=1;
    while(n-base*digit>0){
        n=n-base*digit;
        base*=10;
        digit++;
    }
    int num=1;
    int index=n/digit;
    int remider=n%digit; 
    for(int i=1;i<digit;i++){
            num*=10;
    }
    if(remider==0){
        num=num+index-1;
        remider=digit;
    }else{
        num+=index;
    }
    for(int i=remider;i<digit;i++){
        num/=10;
    }
    return num%10;
}

int main(){
    //cout<<findNthDigit(3)<<endl;
    //cout<<findNthDigit(13)<<endl;
    cout<<findNthDigit(28)<<endl;
    return 0;
}
