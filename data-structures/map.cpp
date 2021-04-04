#include <stdio.h>
#include <string>
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int main(){
  // faster cin and cout
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  map<string,int> mp;
  int n,q;
  cin >> n;
  string name;
  int score;
  for(int i=0;i<n;i++){
    cin >> name >> score;
    mp[name] = score;
  }
  for(auto it=mp.begin(); it!=mp.end(); it++){
    cout << it->first << " " << it->second << "\n";
  }
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> name;
    if(mp.find(name) == mp.end()){
      cout << "Not found\n";
    } else{
      cout << mp[name] << "\n";
    }
  }
  
  return 0;
}