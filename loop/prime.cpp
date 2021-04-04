#include <stdio.h>
int main(){
    int n, count = 0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i == 0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}