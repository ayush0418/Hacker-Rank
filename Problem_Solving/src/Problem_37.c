#include<stdio.h>


int balancedSums(int *a,int n){
    
    int sum  = 0;

    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }

    int leftSum = 0;
    for(int i=0;i<n;i++){
        if(leftSum == sum - leftSum - a[i]){
            return 1;
        }
        leftSum = leftSum + a[i];
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