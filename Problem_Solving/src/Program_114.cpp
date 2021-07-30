#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){

        string s1,s2;
        cin>>s1>>s2;
        string s = "abcdefghijklmnopqrstuvwxyz";

        bool ans = false;
        string output = "NO";

        for(int i=0;i<26;i++){
            if((s1.find(s[i]) != string::npos) && (s2.find(s[i])!=string::npos) ){
                ans = true;
                output = "YES";
                break;
            }
        }
        cout<<output<<endl;
    }
}