/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月28日 星期二 00时34分09秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
using namespace std;
vector<int> constructRectangle(int area) {
    int Lenth =0;
    int width=0;
    int end=sqrt(area);
    for(int i=1;i<=end;i++){
        int j=area/i;
        if(i*j==area){
            Lenth=j;
            width=i;
        }
    }
    vector<int> result;
    result.push_back(Lenth);
    result.push_back(width);
    return result;
}

int main(){
    freopen("input.txt","r",stdin);
    int area;
    while(cin>>area){
        vector<int> vec=constructRectangle(area);
        cout<<"area: "<<area<<endl;
        cout<<"Lenth"<<": "<<vec[0]<<"width"<<": "<<vec[1]<<endl;
    }
}
