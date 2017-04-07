/*************************************************************************
    > File Name: writeup.cpp
    > Author: 
    > Mail: 
    > Created Time: 2017年02月27日 星期一 13时59分35秒
 ************************************************************************/
#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<string> findWords(vector<string>& words) {
    map<char,int> character;
    character['Q']=0;
    character['q']=0;
    character['W']=0;
    character['w']=0;
    character['E']=0;
    character['e']=0;
    character['R']=0;
    character['r']=0;
    character['T']=0;
    character['t']=0;
    character['Y']=0;
    character['y']=0;
    character['U']=0;
    character['u']=0;
    character['I']=0;
    character['i']=0;
    character['O']=0;
    character['o']=0;
    character['P']=0;
    character['p']=0;
    character['A']=1;
    character['a']=1;
    character['S']=1;
    character['s']=1;
    character['D']=1;
    character['d']=1;
    character['F']=1;
    character['f']=1;
    character['G']=1;
    character['g']=1;
    character['H']=1;
    character['h']=1;
    character['J']=1;
    character['j']=1;
    character['K']=1;
    character['k']=1;
    character['L']=1;
    character['l']=1;
    character['Z']=2;
    character['z']=2;
    character['X']=2; 
    character['x']=2; 
    character['C']=2; 
    character['c']=2; 
    character['V']=2; 
    character['v']=2; 
    character['B']=2; 
    character['b']=2; 
    character['N']=2; 
    character['n']=2; 
    character['M']=2;
    character['m']=2;
    vector<string> vec;
    for(string word:words){
        bool flag= true;
        int length=word.size()-1;
        for(int i=0;i<length;i++){
            if(character[word[i]]!=character[word[i+1]]){
                flag=false;
                break;
            }
        }
        if(flag){
            vec.push_back(word);
        }
    }
    return vec;
}

int main(){
    string str[]={"Hello", "Alaska", "Dad", "Peace"};
    vector<string> vec1(str,str+sizeof(str)/sizeof(str[0]));
    vector<string> vec2=findWords(vec1);
    for(string word:vec2){
        cout<<word<<endl;
    }
    return 0;
}
