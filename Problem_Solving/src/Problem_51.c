#include<stdio.h>
#include<math.h>

int main(){
    int n, counter[6] = {0}, result = 0, max = 0;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); }

    for (int i = 0; i < n; ++i) {
        int id = a[i];

        counter[id]++;

        if (counter[id] > max) {
            max = counter[id];
            result = id;
        } 
        else if (counter[id] == max) {
            result = fmin(result, id);
        }
    }

    printf("%d",result);
}