#include<stdio.h>


int balancedSums(int *a,int n){
    
    for(int i=0;i<n;i++){
        int sum  = 0;
        int left = 0;
        for(int j=i+1;j<n;j++){
            sum  = sum + a[j]; 
        }
        for(int k = i-1;k>=0;k--){
            left = left + a[k];
        }

        if(sum == left){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);

    while (t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        int x = balancedSums(a,n);

        if(x == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }  
}