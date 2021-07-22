#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a = "hackerrank";
    
    while(n--){
        string s;
        cin >>s;

        int j = 0;
        for(int i=0;i<s.size();i++){
                if(s[i] == a[j]){
                    j++;
                }
        }
        if(j==a.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}