#include <stdio.h>
#include <vector>
using namespace std;
vector<int> vec[1000];
bool visited[1000];
void dfs(int u){
  visited[u] = true;
  for(int i=0;i<vec[u].size();i++){
    int v = vec[u][i];
    if(visited[v] == false){
      dfs(v);
    }
  }
}
int main(){
  int n,m,u,v,count = 0;
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&u,&v);
    vec[u].push_back(v);
    vec[v].push_back(u);
  }
  for(int i=0;i<n;i++){
    if(visited[i] == false){
      count++;
      dfs(i);
    }
  }
  printf("%d\n",count);
  return 0;
}
/*
6 8
1 0
3 1
4 3
2 3
5 1
1 4
0 3
2 0


8 5
1 0
2 1
6 4
7 4
4 3
*/