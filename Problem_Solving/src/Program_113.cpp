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
    
    long long int count = 0;
    for(int i=n-1;i>=0;i--){
        int x = n - 1 - i;
        count = count + (pow(2,x) * a[i]);
    }
    cout<<count<<endl;
}