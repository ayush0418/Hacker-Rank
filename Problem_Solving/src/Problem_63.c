#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, lenght = 1;
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
            if(i%2 != 0){
                lenght = lenght * 2;
            }
            else{
                lenght = lenght + 1;
            }
        }
        printf("%d",lenght);

    }
}