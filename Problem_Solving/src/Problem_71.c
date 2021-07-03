#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--){
        int n;
        scanf("%d",&n);

        int val = n,count = 0;

        while(val>0){
            if(val%10 != 0 && n%(val%10) == 0){
                count++;
            }
            val = val/10;
        }
        printf("%d\n",count);
    }   
}