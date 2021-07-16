#include<iostream>
#include<string>
using namespace std;

int main(){    
    string s;
    cin>>s;
    char t[3] = {'S' , 'O' , 'S'};

    int length = s.size();
    int n=0;

    for(int i=0;i<length;i=i+3){
        if(s[i] != t[0]) n++;
        if(s[i+1] != t[1]) n++;
        if(s[i+2] != t[2]) n++;
    }

    printf("%d",n);   
}