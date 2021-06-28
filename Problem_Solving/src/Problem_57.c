#include<stdio.h>

int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int a[n], Front = 0, Back = 0;

    for(int i=0;i<p/2;i++){ Front++; }

    for(int i=n/2;i>p/2;i--){ Back++; }

    if(Front > Back){ 
        printf("%d",Back); 
    }
    else{ 
        printf("%d",Front); 
    }
}