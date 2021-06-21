#include<stdio.h>

int main(){
    int n, d, m, sum = 0, count = 0;;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0; i<n; i++){ scanf("%d",&a[i]); }
    scanf("%d %d",&d,&m);

    for(int i=0; i<= n-m; i++){

        for(int j=i; j<m+i; j++){ sum = sum + a[j]; }

        if(sum == d){ count ++; }
        sum =0;
    }

    printf("%d",count);
}