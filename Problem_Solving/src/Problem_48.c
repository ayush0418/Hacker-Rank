#include<stdio.h>

int main(){
    int n,k,count=0, sum =0;
    scanf("%d %d",&n, &k);
    int a[n];
    
    for(int i=0; i<n; i++){ scanf("%d",&a[i]); }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){ 
            if(i<j){
                if((a[i] + a[j]) % k == 0){ 
                    count ++; 
                }
            }
        }
    }

    printf("%d",count);
}