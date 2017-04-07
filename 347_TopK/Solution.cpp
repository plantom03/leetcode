/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月31日 星期五 19时16分38秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution{
    vector<int> topKFrequent(vector<int>&nums,int k){
        map<int,int> frquency;
        for(auto n:nums){
            frquency[n]++;
        }

        map<int,vector<int>> sort_byfrquency;
        for(auto f:frquency){
            sort_byfrquency[f.second].push_back(f.first);
        }

        vector<int> res;
        int step=1;
        for(auto f=sort_byfrquency.rbegin();f!=sort_byfrquency.rend();f++){
            int lenth=f.second.size();
            for(int i=0;i<lenth;i++){
                res.push_back(f.second[i]);
                step++;
                if(step==k){
                    return res;
                }
            }
        }
        return res;
    }
    
};
