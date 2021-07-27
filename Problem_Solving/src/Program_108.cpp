#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;

    int max = 0, x;
    for(int a=l; a<=r; a++){
        for(int b=a; b<=r; b++){
            x = a^b;
            if(x>max){
                max = x;
            }
        }
    }
    cout<<max<<endl;
}