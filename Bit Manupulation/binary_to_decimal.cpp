#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string binary;
    cin>>binary;
    int decimal=0;
    int p=1;
   for(int i=binary.length()-1;i>=0;i--){
    if(binary[i]=='1'){
      decimal+=p;
    }
    p*=2;
   }
   cout<<decimal; 
}
