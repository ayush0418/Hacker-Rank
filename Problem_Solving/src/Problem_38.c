#include <stdio.h>

void Sort(int *A, int n){
    int temp;
    int isSorted = 0;                
    for (int i = 0; i < n-1; i++) {  
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) {  
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){ return ; }
    } 
}

int main(){
    int k, n;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){ scanf("%d", &arr[i]); } 
    
    scanf("%d", &k);
    int brr[k];
    for (int j = 0; j < k; j++){ scanf("%d", &brr[j]); } 

    Sort(arr,n);
    Sort(brr,k);

    if(k>=n){    
        for(int i=0,j=0; j<k && i<n ; i++,j++){
            if(arr[i] != brr[j]){
                printf("%d ",brr[j]);
                i--;
            }
        }
    }
    
    if(n>k){
        for(int i=0,j=0; j<k && i<n ; i++,j++){
            if(arr[i] != brr[j]){
                printf("%d ",arr[j]);
                j--;
            }
        }
    }
}
