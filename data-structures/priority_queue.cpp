#include <stdio.h>
#include <queue>
using namespace std;
int main(){
  //default is sort from max to min
  priority_queue<int,vector<int>,greater<int>> pq;
  //push -> O(logn)
  pq.push(2);
  pq.push(5);
  pq.push(3);
  pq.push(1);

  //top -> O(1)
  printf("%d\n",pq.top());
  while(pq.empty() == false){
    printf("%d ",pq.top());
    //pop -> O(logn)
    pq.pop();
  }
  return 0;
}