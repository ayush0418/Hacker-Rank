#include <stdio.h>

void printArray(int A[], int n){ for (int i = 0; i < n; i++){ printf("%d ", A[i]); } }

void partition(int A[], int low, int high){
    int pivot = A[low];
    int temp;

    while(low != high)
    {
        if(pivot == A[low])
        {
            if(A[high] > pivot){ high = high - 1; }
            else if(A[high] <= pivot)
            {
                temp  = A[high];
                A[high] = A[low];
                A[low] = temp;
                pivot = A[high];
                low = low + 1;
            }
        }
        else if(pivot == A[high])
        {
            if(A[low] < pivot){ low = low + 1; }
            else if(A[low] >= pivot)
            {
                temp = A[high];
                A[high] = A[low];
                A[low] = temp;
                pivot = A[low];
                high = high - 1;
            }
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++) { scanf("%d", &A[i]); }
    partition(A,0,n-1);
    printArray(A, n);
    return 0;
}