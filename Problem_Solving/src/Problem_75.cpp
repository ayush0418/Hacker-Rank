#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long int n;
    cin>>n;

    int len = s.size();
    long long int count = 0;

    for(int i=0;i<len;i++){
        if(s[i] == 'a'){
            count ++;
        }
    }
    count = count * (n/len);

    for(int i=0;i<(n%len);i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    cout<<count;
}