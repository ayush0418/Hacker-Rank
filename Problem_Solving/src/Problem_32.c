#include<stdio.h>
#include<stdlib.h>

int main(){
    int g, n, m, x;
    scanf("%d",&g);

    for(int i=0;i<g;i++){
        scanf("%d %d %d",&m,&n,&x);
        int a[m], b[n], c[m+n];
    
        for(int i=0; i<m; i++){ scanf("%d",&a[i]); }
        for(int i=0; i<n; i++){ scanf("%d",&b[i]); }

        int i = 0, j = 0, k = 0;
        while(j<m && k<n && i<m+n){
            if(a[j] >= b[k]){
                c[i] = b[k];
                k = k + 1;
            }
            else if(a[j] < b[k] ){
                c[i] = a[j];
                j = j + 1;
            }
            i++;
        }

        int p=0, q=0, r=0;
        int sumA = 0, sumB = 0, sumC = 0;
        int countA=0,countB=0,countC=0;
        while(p<m && sumA<=x){
            sumA = sumA + a[p];
            if(sumA <= x){
                countA ++;
            }
            p++;
        }
        while(q<n && sumB<=x){
            sumB = sumB + b[q];
            if(sumB <= x){
                countB ++;
            }
            q++;
        }
        while(r<m+n && sumC<=x){
            sumC = sumC + c[r];
            if(sumC <= x){
                countC ++;
            }
            r++;
        }
        if(countA>=countB && countA>=countC){ printf("%d",countA); }
        else if(countB>=countA && countB>=countC){ printf("%d",countB); }
        else if(countC>=countB && countC>=countA){ printf("%d",countC); }
    } 
    return 0;
}