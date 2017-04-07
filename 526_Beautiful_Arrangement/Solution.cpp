/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月26日 星期日 21时30分19秒
 ************************************************************************/
/**
*题意分析 ：首先 顺序的是肯定满足条件的其次 进行对 N
*
* */
#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int countArrangement(int N){
        vector<int> vec(0,N);
        int res=1;
        for(int i=1;i<=N;i++){
            int tmp=1;
            for(int j=1;j*i<=N;j++){
                tmp = j;
            }
            res=res*tmp;
        }
    return res;
    }
};

int main(){
    Solution s;
    cout<<s.countArrangement(3)<<endl;
    return 0;
}
