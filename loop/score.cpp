#include <stdio.h>
#include <string.h>
int main(){
  int n,q;
  scanf("%d",&n);
  int score[n];
  char name[n][1000];
  for(int i=0;i<n;i++){
    scanf("%s %d",name[i],&score[i]);
  }
  scanf("%d",&q);
  char target[1000];
  for(int i=0;i<q;i++){
    scanf("%s",target);
    for(int j=0;j<n;j++){
      if(strcmp(target,name[j]) == 0){
        printf("%d\n",score[j]);
        break;
      }
    }
  }
  return 0;
}