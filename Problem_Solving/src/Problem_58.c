#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];

    for(int i=0;i<n;i++){ scanf("%s",&a[i]); }

    for (int i = 0; i < n; i++){
        if(a[i] == 'U' ){
            a[i] = 1;
        }
        else{
            a[i] = -1;
        }
    }

    int sum =0,count =0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
        if(sum == 0 && a[i] == 1){
            count++;
        }
    }
    printf("%d",count);   
}