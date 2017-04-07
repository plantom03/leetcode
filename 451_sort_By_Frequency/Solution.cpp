/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月30日 星期四 21时18分59秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution{
public:
    string frequencySort(string s){
        map<char,int> m;
        for(auto c:s){
            m[c]++;
        }
        map<int,vector<char>> sec;
        for(auto p:m){
        sec[p.second].push_back(p.first);
        }
        string res="";
        for(auto s=sec.rbegin();s!=sec.rend();s++){
            int lenth=s->second.size();
            for(int i=0;i<lenth;i++){
                for(int j=0;j<s->first;j++){
                    res+=s->second[i];
                }
            }
        }
        return res;
    }
};

int main(){
    string test="Aabb";
    Solution s;
    cout<<s.frequencySort(test)<<endl;
}
