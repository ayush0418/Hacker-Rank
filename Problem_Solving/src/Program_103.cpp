#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        string s;
        cin >> s;
        int n = s.size();

        int count = 0;
        int j = n-1;
        for(int i=0;i<n/2;i++){
            if(s[i] != s[j-i]){
                count = count + abs(s[j-i] - s[i]);
            }
        }
        cout<<count<<endl;
    }
}