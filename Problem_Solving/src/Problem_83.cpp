#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,c,m;
        cin >> n >> c >> m;

        int wrapper, bars;
        wrapper = n/c;
        bars = n/c + wrapper/m;

        while(wrapper > m){
            wrapper = wrapper%m + wrapper/m;
            bars = bars + wrapper/m;
        }
        cout<<bars;
    }
}