#include<iostream>
#include <string>
using namespace std;



int main(){
    int n, small = 0, capital = 0, digi = 0, charr = 0, res = 0;
    cin >> n;
    string password;
    cin >> password;
    int k = password.size();

    
    for(int i=0; i<k; i++){
        if(password[i] >=  48  && password[i] <=  57 )   digi++;
        else if(password[i] >= 65 && password[i] <= 90)  small++;
        else if(password[i] >= 97 && password[i] <= 122) capital++;
        else if(password[i] >= 33 && password[i] <= 45 || password[i] == 64 || password[i] == 94)  charr++;
    }

    if(small == 0){
        res++;
    }
    if(capital == 0){
        res++;
    }
    if(charr == 0){
        res++;
    }
    if(digi ==  0){
        res++;
    }
    
    if(k >= 6){
        cout<< res;
    }
    else {
        if(k+res >= 6){
            cout<< res;
        }
        else if(k+res<6){
            cout<< 6-k;
        }
    }

}