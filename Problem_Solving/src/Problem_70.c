#include<stdio.h>

int main(){
    int n,k,e=100,pos=0;
    scanf("%d %d",&n,&k);
    int c[n];

    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }

    do{
        pos = pos + k;
        e--;
        if(c[pos%n] == 1){
            e = e-2;
        }

    }while(pos%n != 0);

    printf("%d",e);
}