/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月01日 星期三 21时31分59秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int index1=0;int index2=0;
    int lenth=numbers.size();
bool ta=false;
    for(int i=0;i<lenth;i++){
        
    int flag=target-numbers[i];
        if(ta){
            break;
        }
        int low=i+1;
        int high=lenth-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(numbers[mid]==flag){
                index1=i;
                index2=mid;
                ta=true;
                break;
            }
            if(numbers[mid]>flag){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }   
    }
    vector<int> res;
    res.push_back(index1+1);
    res.push_back(index2+1);
    return res;
}

int main(){
    vector<int> inp;
    inp.push_back(2);
    inp.push_back(3);
    inp.push_back(4);
    vector<int> res=twoSum(inp,6);
    for(int i:res){
        cout<<i<<endl;
    }
    return 0;
}
