#include<stdio.h>

int main(){
    int n,k,q;
    scanf("%d %d %d",&n,&k,&q);

    int a[n], rot = k%n;;
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); }

    
    for(int i=0;i<q;i++){
        int idx;
        scanf("%d",&idx);

        if(idx - rot >=0){
            printf("%d\n",a[idx-rot]);
        }
        else{
            printf("%d\n",a[idx-rot + n]);
        }
    }
}