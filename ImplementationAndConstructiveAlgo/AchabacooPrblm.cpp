#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
      int num=s[i]-'0';
      int result=9-num;
      if(result<num){
        if(result==0 && i==0){
            cout<<num;
        }else{
            cout<<result;
        }
      }else{
        cout<<num;
      }

    }
    return 0;
}