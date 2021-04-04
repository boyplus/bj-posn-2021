#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(1);
    vec.push_back(12);

    for(int i=0;i<vec.size();i++){
        printf("%d ",vec[i]);
    }
    printf("\n");

    vec.pop_back();
    for(int i=0;i<vec.size();i++){
        printf("%d ",vec[i]);
    }
    printf("\n");

    vec.erase(vec.begin()+2);
    for(int i=0;i<vec.size();i++){
        printf("%d ",vec[i]);
    }
    printf("\n");

    vec.insert(vec.begin()+3,3);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        printf("%d ",vec[i]);
    }
    printf("\n");

    vec.clear();
    printf("%d\n",vec.size());
    return 0;
}