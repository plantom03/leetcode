/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月28日 星期二 10时29分33秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<cstdio>
#include<map>
#include<string>
#include<sstream>
using namespace std;

vector<string> findRelativeRanks(vector<int> & nums){
    map<int,int> orig;
    int lenth =nums.size();
    for(int i=0;i<lenth;i++){
        orig.insert(pair<int,int>(nums[i],i));
    }
    
    vector<string> vec(nums.size(),"test");
    int i=0;
    for(auto it=orig.rbegin();it!=orig.rend();it++){
        if(i==0){
        vec[it->second]="Glod Medal";
            i++;
        }else if(i==1){
            vec[it->second]="Silver Medal";
            i++;
        }else if(i==2){
            vec[it->second]="Bronze Medal";
            i++;
            i++;
        }else{
            stringstream ss;
            ss<<i;
            string s=ss.str();
            vec[it->second]=s;
            i++;
        }
    }

    return vec;
}

int main(){
    
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);

    vector<string> str=findRelativeRanks(vec);
    for(auto s:str){
        cout<<s<<endl;
    }
}
