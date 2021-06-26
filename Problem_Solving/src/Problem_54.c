#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);

        if(abs(A-B) == 0 || abs(A-C) == abs(B-C)){
            printf("Mouse C\n");
        }
        else if(abs(C-B) > abs(C-A)){
            printf("Cat A\n");
        }
        else if(abs(C-B) < abs(C-A)){
            printf("Cat B\n");
        }
        else return 0;
    }
}