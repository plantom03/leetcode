/*************************************************************************
	> File Name: Solution.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年03月28日 星期二 20时28分40秒
 ************************************************************************/

#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<stack>
using namespace std;
//由于这个为二叉搜索树，所以比当前节点大的值一定位于右子树，比当前节点小的值
//一定是位于左子树
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode * right;
    TreeNode(int x):val (x),left(NULL),right(NULL){};
};

class Solution{
public:
    TreeNode * convertBST(TreeNode* root){
        //针对当前节点 遍历其右子树，同时更新其左子树的值，
        //同时对左右子树进行遍历
        if(root->right){
            //存在右子树的时候遍历右子树
            int sum= visit(root->right);
            root->val=root->val+root->right->val;
            convertBST(root->right);
        }
        if(root->left){
            root->left->val+=root->val;
            convertBST(root->left);
        }
    }
    int visit(TreeNode* root){
       stack<TreeNode *> s;
        s.push(root);
        int res=0;
        while(!s.empty()){
            TreeNode* tmp= s.top();
            res+=tmp->val;
            s.pop();
            if(tmp->left){
                s.push(tmp->left);
            }
            if(tmp->right){
                s.push(tmp->right);
            }
        }
        return res;
    }
};
