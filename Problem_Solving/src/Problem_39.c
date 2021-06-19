#include<stdio.h>

int binarySearching(int arr[], int size, int element){
    int low = 0;
    int mid;
    int high = size-1;

    while(low<=high){
        mid = (high + low)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int element;
    scanf("%d",&element);

    int n;
    scanf("%d",&n);

    int arr[n] ;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int searchIndex = binarySearching(arr, n, element);
    printf("%d ", searchIndex);
}