#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<n<<endl;

    for(int i=1;i<n;i++){
        if(a[i] != a[i-1]){
            cout<<n-i<<endl;
        }
    }
}