#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);

    int count = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        if(a[i] > k){
            break;
        }
        else if(sum + a[i] <= k){
            sum = sum + a[i];
            count++;
        }
    }
    cout<<count<<endl;

}