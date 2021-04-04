#include <stdio.h>
#include <utility>
#include <string>
#include <iostream>
using namespace std;
int main(){
  //need to include utility to use pair
  pair<double,double> p;
  // p = {1.3,5.4}; -> need new version (c++11) of compiler
  p = make_pair(1.3,5.4);
  printf("%f %f\n",p.first,p.second);
  //need to include string to use string
  pair<string,int> boy;
  boy = make_pair("hello",1234);
  //need to include iostrem to use cin, cout
  cout << boy.first << " test " << boy.second;
  return 0;
}