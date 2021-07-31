#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int min = INT_MAX;
    for(ll i=0;i<n-1;i++){
        if(a[i+1] - a[i]<min){
            min = a[i+1] - a[i];
        }
    }

    for(int i=0;i<n-1;i++){
        if(a[i+1] - a[i] == min){
            cout<<a[i]<<" "<<a[i+1]<<" ";
        }
    }
}