#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        int x =1;
        
        for(int i=sqrt(a); i<=sqrt(b); i++){
            
            x = i*i;

            if(x>=a && x<=b){
                count++;
            }
        }
        cout<<count;

    }
}