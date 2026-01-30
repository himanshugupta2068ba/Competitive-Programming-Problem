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
    // vector<int>sieve(n+1,1);
    // sieve[0]=0;
    // sieve[1]=0;
    // for(int i=2;i*i<n;i++){
    //     if(sieve[i]==1){
    //         for(int j=i*i;j<=n;j+=i){
    //             sieve[j]=0;
    //         }
    //     }
    // }
    // for(int i=2;i<n;i++){
    //     if(sieve[i]==1){
    //       if(sieve[n-i]==1){
    //         cout<<i<<" "<<n-i;
    //         return 0;
    //       }
    //     }
    // }
    if(isPrime(n-2)){
        cout<<n-2<<" "<<"2";
    }else
    cout<<"-1";
    return 0;
}