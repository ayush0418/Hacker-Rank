#include <stdio.h>

void insertionSort(int N, int arr[]) {
    int i,j,value,count =0;
    for(i=1;i<N;i++){
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
            count ++;
        }
        arr[j+1]=value;
    }
    printf("%d",count);
}

int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) { scanf("%d", &arr[i]); }

    insertionSort(N, arr);
    return 0;
}