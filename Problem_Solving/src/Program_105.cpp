#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100000];
    cin >>s;
    int l[26] = {0};

    int n = strlen(s);
    int odd = 0;
    for(int i=0; i<n; i++){
        l[s[i] -'a']++;
    }

    int flag = 0;

    for(int i=0;i<26;i++){
        if(flag == 1 && l[i]%2 != 0){
            cout<<"NO"<<endl;
            return 0;
        }
        if(l[i]%2 != 0){
            flag++;
        }
    }
    cout<<"YES"<<endl;

    
}