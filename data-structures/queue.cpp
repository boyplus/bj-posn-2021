#include <stdio.h>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(2);
    q.push(8);
    q.push(13);
    q.push(2);

    printf("%d\n",q.front());
    q.pop();
    while(q.empty() == false){
        printf("%d ",q.front());
        q.pop();
    }
    return 0;
}