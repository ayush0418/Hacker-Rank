#include<stdio.h>

int main(){
    int x1,x2,v1,v2;

    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    if(x1 == x2){
        printf("YES");
    }
    
    else{
        int t = 1;
        while(x1 != x2){
        if( (x2>x1 && v2>v1) || (x1>x2 && v1>v2) || v1==v2 ){
            printf("NO");
            return 0;
        }
            x1 = v1*t + x1;
            x2 = v2*t + x2;            
        }
        printf("YES");
    }
}