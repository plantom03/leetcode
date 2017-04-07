/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月28日 星期二 13时52分04秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int lenth=nums.size();
    vector<int> tmp(lenth,0);
    for(int i=0;i<lenth;i++){
        tmp[nums[i]-1]=nums[i];
    }
    vector<int> res;
    for(int i=0;i<lenth;i++){
        if(tmp[i]==0){
            res.push_back(i+1);
        }
    }
    return res;
}

int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(3);
    vector<int> res=findDisappearedNumbers(vec);
    for(auto i:res){
        cout<<i<<endl;
    }
    return 0;
}
