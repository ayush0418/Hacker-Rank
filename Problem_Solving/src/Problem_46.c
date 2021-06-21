#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max=0, min=0, maxScore = a[0], minScore = a[0];

    for(int i=1;i<n;i++){
        if(a[i] > maxScore){
            maxScore = a[i];
            max ++;
        }
        else if(a[i] < minScore){
            minScore = a[i];
            min++;
        }
    }

    printf("%d ",max);
    printf("%d",min);

}