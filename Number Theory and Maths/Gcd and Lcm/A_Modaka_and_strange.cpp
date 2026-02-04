#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//lcm(a,b)/gcd(a,b)<=3
void solve(){
   int n;
   cin>>n;
   int ans=0;
   //lcm(a,b)/gcd(a,b)=1;
   ans+=n;
//    lcm(a,b)/gcd(a,b)=2
   ans+=(n/2)*2;
//    lcm(a,b)/gcd(a,b)=3
   ans+=(n/3)*2;
   cout<<ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}