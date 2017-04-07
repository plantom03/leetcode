/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月06日 星期四 20时41分51秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int totalHammingDistance(vector<int>& nums){
        int lenth=nums.size();
        int res=0;
        for(int i=0;i<lenth;i++){
            for(int j=i+1;j<lenth;j++){
                res+=HammingDistance(nums[i],nums[j]);
            }
        }
        return res;
    }
private:
    int HammingDistance(int a,int b){
        int c=a^b;
        int res=0;
        while(c){
            if(c&1){
                res++;
            }
        c=c>>1;
        }
        return res;
    }
};
