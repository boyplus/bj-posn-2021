#include <stdio.h>
#include <utility>
#include <queue>
#include <tuple>
using namespace std;
char str[100][100];
bool visited[100][100];
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%s",str[i]);
  }
  queue<tuple<int,int,int>> q;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(str[i][j] == 'S'){
        q.push(make_tuple(i,j,0));
        break;
      }
    }
  }
  int r,c,count;
  while(q.empty() == false){
    tie(r,c,count) = q.front();
    visited[r][c] = true;
    if(str[r][c] == 'E'){
      printf("%d\n",count);
      return 0;
    }
    q.pop();
    if((str[r][c-1] == '.' || str[r][c-1] == 'E') && visited[r][c-1] == false){
      q.push({r,c-1,count+1});
    }
    if((str[r][c+1] == '.' || str[r][c+1] == 'E') && visited[r][c+1] == false){
      q.push({r,c+1,count+1});
    }
    if((str[r-1][c] == '.' || str[r-1][c] == 'E') && visited[r-1][c] == false){
      q.push({r-1,c,count+1});
    }
    if((str[r+1][c] == '.' || str[r+1][c] == 'E') && visited[r+1][c] == false){
      q.push({r+1,c,count+1});
    }
  }
  
  return 0;
}
/*
4 5
.....
.x...
Sx..E
.x...


*/