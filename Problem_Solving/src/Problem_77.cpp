#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
    int max = 0;

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count>max){
            max = count;
        }
    }
    cout<<n-max<<endl;
}