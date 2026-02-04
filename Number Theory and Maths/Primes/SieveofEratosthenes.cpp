#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>sieve(int n){
    vector<int>prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
   for(int i=2;i*i<n;i++){
    if(prime[i]==1){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
   }
 return prime;
}
int main(){
     int n;
     cin>>n;
     vector<int>primes=sieve(n);
     for(int i=1;i<=n;i++){
        if(primes[i]){
            cout<<i<<" ";
        }
     }
}