#include<iostream>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    while(Q--){
        int n;
        cin >> n;
        string b;
        cin >> b;
    
        bool res=1;
        for(char i='A'; i<='Z'; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(b[j] == i) cnt++;
            }
            if(cnt == 1){
                res=0; 
                break;
            }     
        }

        if(res){
            int cnt_=0;
            for(int i=0; i<n; i++){
                if(b[i]=='_') cnt_++;
            }
            if(cnt_== 0){
                for(int i=1; i<(n-1); i++){
                    if(b[i]!=b[i+1] && b[i]!=b[i-1]) {
                        res=0; 
                        break;
                    }
                }
            } 
        }
        if(res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}