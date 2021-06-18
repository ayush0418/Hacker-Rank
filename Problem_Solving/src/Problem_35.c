#include<stdio.h>

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
    int i,j,c=0,x,k,n;
    scanf("%d",&n);
    scanf("%d",&k);
    int A[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    Sort(A,n);
    
    i=0;
    while(i<n){
        j = i+1;
        while((j<n) && (A[i] + k >= A[j])){ j+=1; }
        x = j;
        j = j-1;
        while((x<n) && (A[j] + k >= A[x])){ x++; }
        c++;
        i=x;
    }
    printf("%d",c);
}