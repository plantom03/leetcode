/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月27日 星期一 22时13分41秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> largestValues(TreeNode* root){
        vector<TreeNode *> first;
        vector<TreeNode *> second;
        first.push_back(root);
        vector<int> res;
        while(!first.empty()&&!second.empty()){
            if(first.empty()){
                int max=second[0].val;
                int lenth=second.size();
                for(int i=0;i<lenth;i++){
                    if(second[i].left){
                        first.push_back(second[i].left);
                    }
                    if(second[i].right){
                        first.push_back(second[i].right);
                    }
                    if(second[i].val>max){
                        max=second[i].val;
                    }
                }
                res.push_back(max);
                second.clear();
            }else{
                int max=first[0].val;
                int lenth=first.size();
                for(int i=0;i<lenth;i++){
                    if(first[i].left){
                        second.push_back(first[i].left);
                    }
                    if(first[i].right){
                        second.push_back(first[i].right);
                    }
                    if(first[i].val>max){
                        max=first[i].val;
                    }
                }
                first.clear();
                res.push_back(max);
            }
        }

        return res;
    }
};
