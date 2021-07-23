#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char letter[26] = {0};
    int count = 0;

    for(int i=0;i<n;i++){
        char s[100];
        cin>>s;
        for(int j=0; j<strlen(s); j++){
            char c = s[j]; 
            if(letter[c-'a'] == i){
                letter[c - 'a']++;
                if(letter[c - 'a'] == n){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}