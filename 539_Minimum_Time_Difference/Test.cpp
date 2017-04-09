/*************************************************************************
	> File Name: Test.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月09日 星期日 17时34分36秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    stringstream ss;
    string s="09";
    ss<<s;
    int i=0;
    ss>>i;
    cout<<i<<endl;
    return 0;
}
