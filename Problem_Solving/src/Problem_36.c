#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int k,n;
        scanf("%d",&k);
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i] + a[j] != k){
                }
                else{
                    printf("%d ", i+1);
                    printf("%d\n",j+1);
                }
            }
        }
    }
}