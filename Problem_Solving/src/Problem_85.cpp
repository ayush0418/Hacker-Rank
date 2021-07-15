#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b[n];

    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(b[i]%2 != 0){
            b[i] = b[i] + 1;
            b[i+1] = b[i+1] + 1;
            count =  count + 2;
        }
    }

    if(b[n-1]%2 != 0){
        cout<<"NO";
    }
    else{
        cout<<count;
    }
}
