#include<stdio.h>
#include<string.h>

int main(){

    int a[26], max=0;
    char k[26];
    for(int i=0;i<26;i++){ 
        scanf("%d",&a[i]); 
    }

    scanf("%s",&k);
    int lenght = strlen(k);

    for(int j=0; j<lenght; j++){
        int ind = k[j] - 'a';

        if(a[ind] > max){
            max = a[ind];
        }
    }
    printf("%d",max*lenght);
}