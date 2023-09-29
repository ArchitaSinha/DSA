#include <iostream>
#include<set>
using namespace std;
int main(){
set<int> s;
s.insert(4);
s.insert(3);
s.insert(4);
s.insert(1);
s.insert(5);
s.insert(3);
for(int i:s){
  cout << i << endl;
}
  set<int> :: iterator it = s.begin();
  it++;
  s.erase(it);
  cout << "After erase" << endl;
  for(int i:s){
  cout << i << endl;
    
}
  cout << "5 present or not " << s.count(5) << endl;
     cout << "-5 present or not " << s.count(-5) << endl;
  set<int> :: iterator f = s.find(4);
  for (auto it = f; it != s.end(); ++it) {
    cout << *it <<" ";
}

}
