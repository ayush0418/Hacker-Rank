#include<stdio.h>

int reverse(int val){
    int rem,rev=0;
    while(val!=0){
        rem = val%10;
        rev = rev*10 + rem;
        val = val/10;
    }
    return rev;
}

int main(){
    int i,j,k,count =0;
    scanf("%d %d %d",&i, &j, &k);

    for(int s=i;s<=j;s++){
        if((s - reverse(s)) %k == 0 ){
            count ++;
        }
    }
    printf("%d",count);
}