#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        int indexMin = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < min){
                min = arr[j];
                indexMin = j;
            }
        }
        //swap a[i] and a[indexMin]
        int temp = arr[i];
        arr[i] = arr[indexMin];
        arr[indexMin] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}