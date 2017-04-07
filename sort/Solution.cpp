/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月26日 星期日 16时51分29秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public: 
    void Bubble_sort(vector<int> & input){
        int lenth=input.size();
        for(int i = 0;i < lenth;i++){
            for(int j = i+1;j < lenth;j++){
                if(input[j-1]>input[j]){
                    input[j-1]=input[j]^input[j-1];
                    input[j]=input[j-1]^input[j];
                    input[j-1]=input[j-1]^input[j];
                }
            }
        }
    }

    void Bubble_sort_improvement(vector<int> & input){
        bool swift=false;
        int lenth=input.size();
        for(int i = 0;i<lenth;i++){
            if(swift=true){
                break;
            }else{
                swift=true;
                for(int j=i+1;j<lenth;j++){
                    if(input[j]<input[j-1]){
                        swift=false;
                        input[j-1]=input[j]^input[j-1];
                        input[j]=input[j]^input[j-1];
                        input[j-1]=input[j]^input[j-1];
                    }
                }
            }
        }
    }
};
