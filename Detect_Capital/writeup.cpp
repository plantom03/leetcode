/*************************************************************************
	> File Name: writeup.cpp
	> Author: habit
	> Mail: platom03@163.com
	> Created Time: 2017年02月27日 星期一 23时32分34秒
 ************************************************************************/
#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<cstdio>
bool Capital_letter(const char);
using namespace std;
bool detectCapitalUse(string word){
    int lenth=word.size();
    if(lenth<2){
        return true;
    }
    if(Capital_letter(word[0])){
        bool flag =true;
        if(Capital_letter(word[1])){
            for(int i=2;i<lenth;i++){
                if(Capital_letter(word[i])){
                }else{
                    flag=false;
                    break;
                }
            }
        }else{
            for(int i=2;i<lenth;i++){
                if(Capital_letter(word[i])){
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }else{
        bool flag=true;
        for(int i=1;i<lenth;i++){
            if(Capital_letter(word[i])){
                flag=false;
                break;
            }
        }
        return flag;
    }
}
bool Capital_letter(const char c){
    if(c>='A'&&c<='Z'){
        return true;
    }
    return false;
}
int main(){
    freopen("input.txt","r",stdin);
    string test;
    while(cin>>test){
    if(detectCapitalUse(test)){
        cout<<test<<": "<<"good use"<<endl;
    }else{
        cout<<test<<": "<<"bad use"<<endl;
    }
}
}
