/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年04月09日 星期日 16时53分06秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<sstream>
using namespace std;
class Solution{
public:
    int findMinDifference(vector<string>& timePoints){
        vector<int> time;
        for(auto t:timePoints){
            time.push_back(Time2Minutes(t));
        }
        sort(time.begin(),time.end());
        int lenth=time.size();
        int mindifference=INT_MAX;
        for(int i=0;i<lenth-1;++i){
            if(time[i+1]-time[i]<mindifference){
                mindifference=time[i+1]-time[i];
            }
        }
        if((3600-(time[lenth-1]-time[0])<mindifference)){
            mindifference=(3600-(time[lenth-1]-time[0]));
        }
        return mindifference;
    }
private:
    int Time2Minutes(string time){
        size_t pos=time.find(":");
        string hour=time.substr(0,pos);
        string minute=time.substr(pos+1);
        int res=0;
        stringstream ss;
        ss<<hour;
        int tmp=0;
        ss>>tmp;
        res=res+tmp*60;
        ss.clear();
        ss<<minute;
        ss>>tmp;
        res+=tmp;
        return tmp; 
    }
};
