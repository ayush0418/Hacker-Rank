#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        int grade;
        scanf("%d",&grade);

        if(grade<38){
            printf("%d\n",grade);
        }
        else if(grade%5==0 || grade%5 == 1 || grade%5 == 2){
            printf("%d\n",grade);
        }
        else if(grade%5 == 3){
            printf("%d\n",grade+2);
        }
        else if(grade%5 == 4){
            printf("%d\n",grade+1);
        }
        else{ return 0;}
    }
}