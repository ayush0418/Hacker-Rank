#include<stdio.h>

int LCM(int arr[], int size){
    int lcm = arr[0];
    for(int i=1;i<size;i++){ lcm = (lcm * arr[i])/(gcd(lcm, arr[i])); }
    return lcm;
}

int gcd(int a, int b){
    if(b%a == 0){ return a; }
    return gcd(b,a%b);
}

int GCD(int brr[], int size){
    int g =brr[0];
    for(int i=1;i<size;i++){ g = gcd(brr[i], g); }
    if(g == 1){ return 1; }
    return g;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[m];

    for(int i=0;i<n;i++){ scanf("%d",&a[i]); }
    for(int i=0;i<m;i++){ scanf("%d",&b[i]); }

    int l = LCM(a,n);
    int g = GCD(b,m);

    int count =0;
    for(int i=l,j=2;i<=g;i=l*j,j++){
        if(g%i == 0){
            count++;
        }
    }

    printf("%d",count);
}