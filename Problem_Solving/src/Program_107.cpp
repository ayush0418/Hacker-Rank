#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int l[101] = {0};

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        l[a[i]]++;
    }
    
    for(int i=0;i<101;i++){
        if(l[i] == 1){
            cout<<i<<endl;
        }
    }
}