#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>> n >> k;
    int a[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int count = 0;
    int pageN = 0;

    for(int i=1; i<=n; i++){                // CHAPTER
        for(int j=1; j<=a[i]; j++){         // PROBLEM
            if(k==1 || j%k == 1){
                pageN++;
            }
            if(pageN == j){
                count++;
            }
        }
    }
    cout<<count<<endl;   
}