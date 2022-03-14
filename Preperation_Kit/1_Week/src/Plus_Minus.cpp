#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    double a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    double pos = 0, neg = 0, zer = 0;
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            pos++;
        }
        else if(a[i] < 0){
            neg++;
        }
        else{
            zer++;
        }
    }

    double x = pos/n;
    double y = neg/n;
    double z = zer/n;

    std::cout << std::fixed << std::setprecision(6) << x << endl;
    std::cout << std::fixed << std::setprecision(6) << y << endl;
    std::cout << std::fixed << std::setprecision(6) << z << endl;
}