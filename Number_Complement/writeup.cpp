/*************************************************************************
	> File Name: writeup.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年02月27日 星期一 12时31分37秒
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int input=5;
    int musk=~0;
    while(musk&input){
        musk<<=1;
    }
    int num=~musk&~input;
    cout<<num<<endl;
}
