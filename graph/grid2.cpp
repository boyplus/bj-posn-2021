#include <stdio.h>
char str[100][100];
int count = 0;
void rec(int i,int j){
  str[i][j]='.';
  count++;
  printf("At row %d, column %d count is %d\n",i,j,count);
  if(str[i+1][j] == 'x'){ rec(i+1,j); }
  if(str[i-1][j] == 'x'){ rec(i-1,j); }
  if(str[i][j-1] == 'x'){ rec(i,j-1); }
  if(str[i][j+1] == 'x'){ rec(i,j+1); }
}
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%s",str[i]);
  }
  int r,c;
  scanf("%d %d",&r,&c);
  if(str[r][c] == 'x'){
    rec(r,c);
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
2 1
1 3

output
Yes
*/