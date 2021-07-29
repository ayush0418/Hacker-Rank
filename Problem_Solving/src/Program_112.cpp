#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        int len = s.size();

        if(len%2 != 0){
            cout<<"-1"<<endl;
            continue;
        }

        int count = 0;

        int a[26] = {0};
        for(int i=0;i<len/2;i++){
            a[s[i] - 'a']++;
        }

        int b[26] = {0};
        for(int i=len/2;i<len;i++){
            b[s[i] - 'a']++;
        }
        
        for(int i=0;i<26;i++){
            if((a[i] > b[i]) && (a[i]-b[i] != 0)){
                count = count + abs(a[i] - b[i]);
            }
        }

        cout<<count<<endl;
    }
}