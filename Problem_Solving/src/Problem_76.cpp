#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count = -1;
    for(int i=0; i<n; i++, count++){
        if(i<n-2 && a[i+2] == 0){
            i++;
        }
    }
    cout<<count;
}