#include <stdio.h>
#include <set>
using namespace std;
int main(){
  set<int> s;
  //insert -> O(logn)
  s.insert(7);
  s.insert(1);
  s.insert(7);
  s.insert(8);
  s.insert(1);

  //erase -> O(logn)
  s.erase(1);
  //size -> O(1)
  printf("%d\n",(int)s.size());
  //print all element -> O(nlogn)
  for(int num:s){
    printf("%d ",num);
  }
  return 0;
}