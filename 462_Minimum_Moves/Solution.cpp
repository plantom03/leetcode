/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月30日 星期四 20时33分04秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<cmath>
#include<limits.h>
#include<vector>
using namespace std;
class Solution{
public:
    int minMoves2(vector<int>& nums){
        int lenth =  nums.size();
        //排除简单情况当数组为空或者数组只有一个元素的时候
        //不需要进行移动
        if(lenth==0||lenth==1){
            return 0;
        }
        int max=nums[0],min=nums[0];
        for(int i=0;i<lenth;i++){
            if(nums[i]<min){
                min=nums[i];
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int res=INT_MAX;
        for(int j=min;j<=max;j++){
            int flag=0;
            for(int i=0;i<lenth;i++){
                flag+=abs(nums[i]-j);
            }
            if(flag<res){
                res=flag;
            }
        } 
        return res;
        
    }
};
