#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = -1;
    int max = INT32_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                min = j-i;
                if(min<max){
                    max = min;
                }
            }
        }
    }
    
    if(min == -1){
        cout<<min;
    }
    else{
        cout<<max;
    }
}