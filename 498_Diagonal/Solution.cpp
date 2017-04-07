/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月31日 星期五 20时49分42秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix){
        int length=matrix.size();
        vector<int> res; 
        if(length==0){
            return res;
        }
        
        int width=matrix[0].size();

        int endnum=length+width;

        int i=0,j=0;
        //在没有达到最后一个位置的时候
        for(int step=0;step<=endnum;step++){
            //表明为偶数的时候
            if(step%2==0){
                int target=j;
                while(i<=target){
                    res.push_back(matrix[i][j]);
                    i++;
                    j--;
                }
            }else{
                int target=i;
                while(j<=target){
                    res.push_back(matrix[i][j]);
                }
            }
        }

        return res;

    }
};
