#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >>s;
        int l[26] = {0};

        for(int i=0;i<s.length();i++){
            l[s[i] - 'a']++;
        }

        int c = 0;
        for(int i=0;i<26;i++){
            if(l[i] !=0){
                c++;
            }
        }
        cout<<c<<endl;
    }
}