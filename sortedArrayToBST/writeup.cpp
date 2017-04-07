/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月04日 星期六 15时07分24秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
}
TreeNode * arraY(vector<int>,int,int);
TreeNode* sortedArrayToBST(vector<int> & nums){
    int lenth=nums.size()-1;
    return arraY(nums,0,lenth);
}

TreeNode* arraY(vector<int> nums,int left,int right){
    if(left>right){
        return NULL;
    }

    int mid=(left+right)>>1;

    TreeNode root(nums[mid]);
    root->left=arraY(nums,left,mid-1);
    root->right=arraY(nums,mid+1,right);
    return &root;
};

