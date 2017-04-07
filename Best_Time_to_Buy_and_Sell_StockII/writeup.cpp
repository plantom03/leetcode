/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月04日 星期六 13时16分14秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
//解答思路 寻找在这个队列中所有的升序即可，升序段开始时候进行买入 之后再进行卖出的操作即可满足要求
int maxProfit(vector<int>& price){
    int lenth=price.size();
    int resprofit=0;
    int tmpprofit=0;
    int buy=0;
    int sell=0;
    for(int i=1;i<lenth;i++){
        //判断是否为升序段的开始
        if(price[i]>price[i-1]){
            buy=price[i-1];
            //判断升序段什么时候结束
            for(int j=i;j<lenth;j++){
                if(price[j]<price[j-1]){
                    sell=price[j-1];
                    i=j;
                    tmpprofit=sell-buy;
                    resprofit+=tmpprofit;
                    break;
                }else if(j==lenth-1){
                    sell=price[j];
                    i=j;
                    tmpprofit=sell-buy;
                    resprofit+=tmpprofit;
                }
            }
        }
    }
    return resprofit;
}

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(6);
    cout<<maxProfit(vec)<<endl;
}
