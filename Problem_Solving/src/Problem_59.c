#include<stdio.h>

int main(){
    int b,n,m,sum = 0,nsum = -1;
    scanf("%d %d %d",&b,&n,&m);
    int key[n], usb[m];

    for(int i=0;i<n;i++){ scanf("%d",&key[i]); }
    for(int i=0;i<m;i++){ scanf("%d",&usb[i]); }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum = key[i] + usb[j];

            if(sum>nsum && sum<=b){
                nsum = sum;
            }
        } 
    }
    printf("%d",nsum);
}