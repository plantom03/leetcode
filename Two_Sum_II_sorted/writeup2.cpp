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
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    unordered_map<int,int> sumhash;
    int lenth=numbers.size();
    typedef pair<int,int> Int_pair;
    for(int i=0;i<lenth;i++){
        sumhash.insert(Int_pair(numbers[i],i));
    }
    vector<int> res;
    for(int i=0;i<lenth;i++){
        unordered_map<int,int> ::const_iterator ham;
        ham=sumhash.find(target-numbers[i]);
        if(ham!=sumhash.end()){
            res.push_back(i+1);
            res.push_back(ham->second+1);
            break;
        }
    }
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
