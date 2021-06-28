#include<stdio.h>
#include<math.h>

void sort(int a[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a, n);

    int count = 1, maxcount=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( abs(a[j]-a[i]) <= 1){
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
        }
        count =1;
    }
    printf("%d\n",maxcount);
}