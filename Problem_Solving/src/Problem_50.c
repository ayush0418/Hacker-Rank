#include<stdio.h>

int main(){
    int n, t;
    scanf("%d %d",&n,&t);
    
    int a[n];
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); }

    while (t--){
        int entry,exit;
        scanf("%d %d", &entry,&exit);

        int minimum = a[entry];
        for(int i = entry; i <= exit; i++){
            if(a[i]<minimum){ minimum = a[i]; }
        }
        printf("%d\n",minimum);      
    }
}
    