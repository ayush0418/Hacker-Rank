#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n >> m;
    char *s[n];

    for(int i=0;i<n;i++){
        s[i] = (char *)malloc(1024 * sizeof(char));
        cin>>s[i];
    }

    int known, max_known = 0, know_all = 0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            known = 0;
            for(int k=0;k<m;k++){
                if(s[i][k] == '1' || s[j][k] == '1'){
                    known++;
                }
            }
            if(known > max_known){
                max_known =  known;
                know_all = 0;
            }

            if(known == max_known){
                know_all++;
            }
        }
    }

    cout<<max_known<<endl<<know_all;


}