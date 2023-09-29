#include <iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> m;
  m[1] = "archita";
  m[13] = "sinha";
  m[2] = "worls";
  
  m.insert({5,"fleet"});
  for (auto i:m){
    cout << i.first << endl;
  }
  cout << "findhing 13 " << m.count(13) << endl;
  m.erase(2);
  for (auto i:m){
    cout << i.first << endl;
  }
  auto it = m.find(5);
  for(auto i = it ; i!=m.end(); i++){
    cout << (*i).first << endl;
  }
  
}
