#include <stdio.h>
#include <vector>
using namespace std;
vector<int> vec[1000];
int main(){
  int n,m,u,v;
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&u,&v);
    vec[u].push_back(v);
    vec[v].push_back(u);
  }
  for(int i=0;i<n;i++){
    printf("%d: ",i);
    for(int j=0;j<vec[i].size();j++){
      printf("%d ",vec[i][j]);
    }
    printf("\n");
  }
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
*/