#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++){ printf("%d ", A[i]); }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    for (int i = 1; i <= n-1; i++){
        key = A[i];
        j = i-1;
        while(j >= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
            printArray(A, n);
        }
        A[j+1] = key;
    }
}

int main(){ 
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}