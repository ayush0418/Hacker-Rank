#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count = 0 ;
    for(int i=0; i<n-2; i++){
        if(a[i] == '0' && a[i+1] == '1' && a[i+2] == '0'){
            count++;
            i = i+2;
        }
    }
    cout<<count;
}