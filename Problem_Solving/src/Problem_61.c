#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];

    for(int i=0;i<n;i++){ scanf("%d",&a[i]); }

    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    int count = max - k;

    if(count>0){ printf("%d",count); }
    else{ printf("0"); }
}