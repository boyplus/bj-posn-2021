#include <stdio.h>
char str[100][100];
void rec(int i,int j){
  str[i][j]='.';
  if(str[i+1][j] == 'x'){ rec(i+1,j); }
  if(str[i-1][j] == 'x'){ rec(i-1,j); }
  if(str[i][j-1] == 'x'){ rec(i,j-1); }
  if(str[i][j+1] == 'x'){ rec(i,j+1); }
}
int main(){
  int n,m,count=0;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%s",str[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(str[i][j] == 'x'){
        count++;
        rec(i,j);
      }
    }
  }
  printf("%d\n",count);
  return 0;
}

/*
4 5
....x
..xx.
.xx.x
....x
*/