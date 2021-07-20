#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[10000] = {0};

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[x]--;
    }
    
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);
        arr[x]++;
    }

    for(int i=0;i<10000;i++){
        if(arr[i] != 0){
            printf("%d ",i);
        }
    }
}
