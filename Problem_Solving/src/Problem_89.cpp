#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    
    long long int m = 3;

    while(t>m){
        t = t - m;
        m = m*2;
    } 

    cout<<(m - t + 1);
}