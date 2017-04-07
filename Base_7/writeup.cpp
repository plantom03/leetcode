/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月03日 星期五 22时20分07秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
using namespace std;
string convertToBase(int num){
    if(num==0){
        return "0";
    }
    string sympol="";
    if(num<0){
        //在数值为负的时候，转换为正值，同时在输出中标记负号
        num=0-num;
        sympol+='-';
    }
    string tmp="";
    while(num!=0){
        int quotient=num/7;
        int residue=num-quotient*7;
        num =quotient;
        tmp+=(residue+'0');
    }
    
    for(string::reverse_iterator rit=tmp.rbegin();rit!=tmp.rend();++rit){
        sympol+=*rit;
    }
    return sympol;
}

int main(){
    cout<<convertToBase(-100)<<endl;
    cout<<convertToBase(100)<<endl;
    cout<<convertToBase(-1)<<endl;
    cout<<convertToBase(0)<<endl;
    return 0;
}
