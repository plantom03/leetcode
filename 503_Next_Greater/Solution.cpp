/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月05日 星期三 21时11分53秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{
public:
    vector<int> nextGreaterElements(vector<int>& nums){
        int lenth=nums.size();
        vector<int> res;
        if(lenth==0){
            return res;
        }

        for(int i=0;i<lenth;i++){
            bool flag=false;
            for(int j=i+1;j<lenth;j++){
                if(nums[j]>nums[i]){
                    res.push_back(nums[j]);
                    flag=true;
                    break;
                }
            }

            if(flag==false){
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        res.push_back(nums[i]);
                        flag=true;
                        break;
                    }
                }
            }
            if(flag == false){
                res.push_back(-1);
            }
        }
        return res;
    }
};
