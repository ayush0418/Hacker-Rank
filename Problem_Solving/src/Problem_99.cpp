#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char s[10000], r[10000];
        cin>>s;
        int n = strlen(s);
        int a[n-1], b[n-1];

        for(int i=0; i<n; i++){
            r[i] = s[n - i - 1];        
        }

        for(int i=0; i<n-1; i++){
            a[i] = abs(s[i+1] - s[i]);
            b[i] = abs(r[i] - r[i+1]);
        }      

        int res = 1;
        for(int i=0; i<n-1; i++){
            if(a[i] != b[i]){
                res = 0;
            }
        }

        if(res){
            cout<<"Funny"<<endl;
        }
        else{
            cout<<"Not Funny"<<endl;
        }
    }
}