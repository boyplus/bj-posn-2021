#include <stdio.h>
int main(){
    int n,a,sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum = sum + a;
    }
    float avg = (float)sum/n;
    printf("%.2f",avg);
    return 0;
}