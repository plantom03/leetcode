/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月07日 星期二 16时52分15秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int findRadius(vector<int>& houses,vector<int>& heaters){
    int Radius=0;
    int lenth=heaters.size();
    Radius=abs(heaters[0]-houses[0])*2;
    for(int i=1;i<lenth;i++){
        int size=heaters[i]-heaters[i-1]; 
        if(size>Radius){
            Radius=size;
        }
    }
    int size=houses[houses.size()]-heaters[heaters.size()];
    if(size*2>Radius){
        Radius=size*2;
    }
    int radius=Radius/2;
    if(2*radius==Radius){
        Radius=radius;
    }else{
        Radius=radius+1;
    }
    return Radius;
}
