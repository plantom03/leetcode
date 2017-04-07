/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月31日 星期五 16时49分33秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
    int lenth=nums.size();
    vector<int> res(lenth,1);
        //从前向后迭代做乘法一次
        for(int i=1;i<lenth;i++){
            res[i]=nums[i-1]*res[i-1];
        }

        int right=1;
        for(int i=lenth-1;i>=0;i--){
            res[i]*=right;
            right*=nums[i];
        }
    return res;
    }
};
