/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月04日 星期六 14时21分05秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums){
    vector<int> vec=nums;
    sort(vec.begin(),vec.end());
    int lenth=vec.size();
    for(int i=0;i<lenth;i++){
        if(vec[i]!=i+1){
            return i+1;
        }
    }
}

int main(){
    
}
