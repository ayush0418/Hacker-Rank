#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=0;
                    break;
                }
            }           
        }
    }
    printf("%d", count);
}