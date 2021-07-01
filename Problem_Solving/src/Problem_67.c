#include<stdio.h>

int main(){
    int n, shared =5,liked = 0,cumulative = 0;;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        liked = shared/2;
        shared = liked * 3;
        cumulative = cumulative + liked;

    }
    printf("%d\n",cumulative);
}