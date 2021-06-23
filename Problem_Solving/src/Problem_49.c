#include<stdio.h>

int main(){
    int n, k, sum=0, chargedMoney;
    scanf("%d %d",&n,&k);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&chargedMoney);

    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }

    int actualMoney = (sum - a[k])/2;

    if(chargedMoney - actualMoney == 0){
        printf("Bon Appetit");
    }
    else{
        printf("%d",chargedMoney - actualMoney);
    }
}