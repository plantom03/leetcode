/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月31日 星期五 16时32分48秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> singleNumber(vector<int>& nums){
        map<int,int> m;
        for(auto i:nums){
            //当没有找到当前元素时
            auto it=m.find(i);
            if(it==m.end()){
                m[i]++;
            }else{
                m.erase(it);
            }
        }
        vector<int> res;
        for(auto t:m){
            res.push_back(t.first);
        }
        return res;
    }
};
