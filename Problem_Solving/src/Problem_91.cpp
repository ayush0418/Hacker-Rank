#include<iostream>
using namespace std;

int main(){
    int S, T, A, B, M, N;
    cin >> S >> T >> A >> B >> M >> N;

    int apple[M];
    int orange[N];
    for(int i=0;i<M;i++){
        cin >> apple[i];
    }

    for(int i=0;i<N;i++){
        cin >> orange[i];
    }

    int countA = 0, countB = 0;
    for(int i=0;i<M;i++){
        if( (apple[i] + A >= S) && (apple[i] + A <= T)  ){
            countA++;
        }
    }
    for(int i=0;i<N;i++){
        if( (orange[i] + B >= S) && (orange[i] + B <= T)  ){
            countB++;
        }
    }

    cout<<countA<<endl<<countB;
}