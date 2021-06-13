#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3;
    int a = 0, b = 0, c = 0;
    int p_sum = 0, q_sum = 0, r_sum = 0;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    int arr1[n1];
    int arr2[n2];
    int arr3[n3];

    for(int i=0;i<n1;i++){ scanf("%d",&arr1[i]); }
    for(int i=0;i<n2;i++){ scanf("%d",&arr2[i]); }
    for(int i=0;i<n3;i++){ scanf("%d",&arr3[i]); }
  
    for(int i=0; i<n1; i++){ p_sum += arr1[i]; }
    for(int i=0; i<n2; i++){ q_sum += arr2[i]; }
    for(int i=0; i<n3; i++){ r_sum += arr3[i]; }

    while(p_sum != q_sum || p_sum != r_sum || q_sum != r_sum){
        if((p_sum > q_sum && p_sum > r_sum) || (p_sum == q_sum && p_sum > r_sum) || (p_sum > q_sum && p_sum == r_sum)){
            p_sum -= arr1[a];
            a++;
        }

        if((q_sum > r_sum && q_sum > p_sum) || (q_sum == r_sum && q_sum > p_sum) || (q_sum == p_sum && q_sum > r_sum)){
            q_sum -= arr2[b];
            b++;
        }

        if((r_sum > q_sum && r_sum > p_sum) || (r_sum == q_sum && r_sum > p_sum) || (r_sum == p_sum && r_sum > q_sum)){
            r_sum -= arr3[c];
            c++;
        }
    }
    
    printf("%d",p_sum);
    return 0;
}