#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    int k;
    cin>>k;

    for(int i=0;i<n;i++){
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + ((s[i]-'a'+k)%26);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] ='A' + ((s[i]-'A'+k)%26);
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<s[i];    
    }
}