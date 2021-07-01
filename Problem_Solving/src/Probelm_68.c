#include<stdio.h>

int main(){
    int t,n,m,s;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d %d",&n,&m,&s);

        int k = (m + s - 1)%n;
        if(k == 0){
            k = n;
        }
        printf("%d",k);

    }
}