#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<(a*b)/x;//LCM
    //a*b=gcd(a,b)*lcm(a,b);
}