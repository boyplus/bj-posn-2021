#include <stdio.h>
#include <stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(2);
  st.push(3);
  st.push(5);
  st.push(1);
  st.push(12);
  st.push(6);
  printf("%d\n",st.top());

  st.pop();
  while(st.empty() == false){
    printf("%d ",st.top());
    st.pop();
  }
  return 0;
}