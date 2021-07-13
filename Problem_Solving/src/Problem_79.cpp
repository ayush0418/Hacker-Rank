#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int b,w,bc,wc,z;
        cin>> b >> w;
        cin>> bc >> wc >> z;
        long long int ans = 0;


        if(bc > wc + z){
            ans = (b+w)*wc + b*z;
        }
        else if(wc > bc + z){
            ans = (b+w)*bc + w*z;
        }
        else{
            ans = b*bc + w*wc;
        }

        cout<<ans<<endl;
    }
}