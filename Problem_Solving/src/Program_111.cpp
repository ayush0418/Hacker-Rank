#include<bits/stdc++.h>
using namespace std;
string a = "abcdefghijklmnopqrstuvwxyz";

int main(){
    int n;
    cin >> n;
    string s;
    cin>>s;
    int maxi =  0;

    for(int i=0;i<26;i++){
        for(int j=i+1;j<26;j++){
            char x = a[i];
            char y = a[j];
            string t = "";

            for(int k=0;k<n;k++){
                if(s[k] == x || s[k] == y){
                    t = t + s[k];
                }
            }

            bool flag = true;
            for(int f=0;f<t.size()-1;f++){
                if(t[f] == t[f+1]){
                    flag = false;
                    break;
                }
            }
            int ts = t.size();
            if((flag) && ts>1){
                maxi = max(maxi,ts);
            }
        }
    }
    cout<<maxi<<endl;
}