#include<iostream>
#include<vector>
using namespace std;
int main(){
    int p,d,m,s;
    cin>> p >> d >> m >> s;

    int count = 0;
    
    while(s>=p){
        count++;
        s = s - p;
        p = std :: max(p-d,m);
    }
    cout<<count ;
}