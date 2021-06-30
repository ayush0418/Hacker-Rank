#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, k,students = 0;
        scanf("%d %d",&n,&k);
        
        int a[n];
        for(int i=0;i<n;i++){ scanf("%d",&a[i]); }
        
        for(int i=0;i<n;i++){
            if(a[i] <= 0){ students ++; }
        }

        if(students >= k){
            printf("NO\n");
        }
        else{
             printf("YES\n");
        }
    }
}