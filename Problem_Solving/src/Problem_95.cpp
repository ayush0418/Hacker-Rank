#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i=0;
    while(i<(((int)s.length())-1)){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i--;
        }
        else{
            i++;
        }
    }
    if(s.empty()){
        cout<<"Empty String";
    }
    else{
        cout<<s<<endl;
    }
}
/*
aaabccddd
abd

abba


*/