/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月27日 星期一 20时57分18秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int lenth =0;
    int startnum=0;
    int endnum=0;
    for(int i:nums){
        if(i==1){
            endnum++;
        }else{
            int tmp=endnum-startnum;
            if(lenth<tmp){
                lenth=tmp;
            } 
            startnum=endnum;
        }
    }
    int tmp=endnum-startnum;
    if(lenth<tmp){
        lenth=tmp;
    }
    return lenth;
        
}

int main(){
    //int array[]={1,1,0,1,1,1};
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    cout<<findMaxConsecutiveOnes(vec)<<endl;
    return 0;
}
