#include<iostream>
using namespace std;

int main(){
    int dd1,mm1,yy1;
    int dd2,mm2,yy2;
    cin>>dd1>>mm1>>yy1;      
    cin>>dd2>>mm2>>yy2;      

    if(yy1 == yy2  && mm1 == mm2 && dd1 >= dd2 ){
        cout<<(dd1-dd2)*15;
    }
    else if(yy1 == yy2  && mm1 >= mm2){
        cout<<(mm1-mm2)*500;
    }
    else if(yy1>yy2){
        cout<<10000;
    }
    else{ 
        cout<<0;
    }
}