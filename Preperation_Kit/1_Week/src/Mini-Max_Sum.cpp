#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    sort(a,a+5);
    ll min = 0, max = 0;
    for(int i=0;i<4;i++){
        min = min + a[i];
    }

    for(int i=1;i<5;i++){
        max = max + a[i];
    }

    cout<< min <<" "<< max;
}