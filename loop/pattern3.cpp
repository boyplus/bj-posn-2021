#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //space = 2i-2
        //i = 3
        //space 6-2 = 4
        for(int j=1;j<=2*i-2;j++){
            printf("-");
        }
         
        for(int j=n-i+1;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}