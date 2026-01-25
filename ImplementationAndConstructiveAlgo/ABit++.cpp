#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkStatement(string statement){
    if(statement=="X++" || statement=="++X"){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cin>>n;
   
    int x=0;
    for(int i=0;i<n;i++){
        string statements;
        cin>>statements;
        if(checkStatement(statements)){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
    
    return 0;
}