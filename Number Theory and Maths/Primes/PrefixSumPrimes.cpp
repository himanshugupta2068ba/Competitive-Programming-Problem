#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==0 ||n==1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) one++;
        else two++;
    }
    // int prefix=0;
    // while(one || two){
    //    if(one!=0 && isPrime(prefix+1)){
    //       cout<<"1"<<" ";
    //       one--;
    //       prefix+=1;
    //    }
    //    if(two!=0 && isPrime(prefix+2)){
    //     cout<<"2"<<" ";
    //     two--;
    //     prefix+=2;
    //    }
    // }
    if(two==0){
      for(int i=0;i<one;i++) cout<<"1 ";
    }
    else if(one==1){
       for(int i=0;i<two;i++){
        cout<<"2  ";
       }
    }else{
        cout<<"2 1";
        for(int i=0;i<two-1;i++) cout<<"2 ";
        for(int i=0;i<one-1;i++) cout<<"1 ";
    }
    return 0;
}