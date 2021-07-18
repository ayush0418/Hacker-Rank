#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>> n >> a >> b;
        int val[n];

        if(a==b){
            cout<< ((n-1)*b)<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                val[i] = (i*a + (n-i-1)*b);
            }

            sort(val, val+n);

            for(int i=0;i<n;i++){
                cout<<val[i]<<" ";
            }
            cout<<endl;
        }
    }
}